#include <bits/stdc++.h>

using namespace std;

#define lb      lower_bound
#define ub      upper_bound
#define pb      push_back
#define pf      push_front
#define mp      make_pair
#define gcd     __gcd
#define all(x)  x.begin(), x.end()
#define S(x)    scanf("%d", &x)
#define Sl(x)   scanf("%lld", &x)
#define P(x)    printf("%d", x)
#define Pl(x)   printf("%lld", x)
#define PS(x)   printf("%s", x)
#define MOD     1000000007LL

typedef long long       ll;
typedef vector<int>     vi;
typedef vector<vi>      vvi;
typedef pair<int, int>  ii;
typedef vector<ii>      vii;
template<class T> T abs(T x) { return x > 0 ? x : -x; }

class DisjointSets
{
public:

	// Create an empty DisjointSets data structure
	DisjointSets();
	// Create a DisjointSets data structure with a specified number of elements (with element id's from 0 to count-1)
	DisjointSets(int count);
        // Copy constructor
        DisjointSets(const DisjointSets & s);
	// Destructor
	~DisjointSets();

	// Find the set identifier that an element currently belongs to.
	// Note: some internal data is modified for optimization even though this method is consant.
	int FindSet(int element) const;
	// Combine two sets into one. All elements in those two sets will share the same set id that can be gotten using FindSet.
	void Union(int setId1, int setId2);
	// Add a specified number of elements to the DisjointSets data structure. The element id's of the new elements are numbered
	// consecutively starting with the first never-before-used elementId.
	void AddElements(int numToAdd);
	// Returns the number of elements currently in the DisjointSets data structure.
	int NumElements() const;
	// Returns the number of sets currently in the DisjointSets data structure.
	int NumSets() const;

private:

	// Internal Node data structure used for representing an element
	struct Node
	{
		int rank; // This roughly represent the max height of the node in its subtree
		int index; // The index of the element the node represents
		Node* parent; // The parent node of the node
	};

	int m_numElements; // the number of elements currently in the DisjointSets data structure.
	int m_numSets; // the number of sets currently in the DisjointSets data structure.
	std::vector<Node*> m_nodes; // the list of nodes representing the elements
};

DisjointSets::DisjointSets()
{
	m_numElements = 0;
	m_numSets = 0;
}

DisjointSets::DisjointSets(int count)
{
	m_numElements = 0;
	m_numSets = 0;
	AddElements(count);
}

DisjointSets::DisjointSets(const DisjointSets & s)
{
	this->m_numElements = s.m_numElements;
	this->m_numSets = s.m_numSets;

	// Copy nodes
	m_nodes.resize(m_numElements);
	for(int i = 0; i < m_numElements; ++i)
		m_nodes[i] = new Node(*s.m_nodes[i]);

	// Update parent pointers to point to newly created nodes rather than the old ones
	for(int i = 0; i < m_numElements; ++i)
		if(m_nodes[i]->parent != NULL)
			m_nodes[i]->parent = m_nodes[s.m_nodes[i]->parent->index];
}

DisjointSets::~DisjointSets()
{
	for(int i = 0; i < m_numElements; ++i)
		delete m_nodes[i];
	m_nodes.clear();
	m_numElements = 0;
	m_numSets = 0;
}

// Note: some internal data is modified for optimization even though this method is consant.
int DisjointSets::FindSet(int elementId) const
{
	assert(elementId < m_numElements);

	Node* curNode;

	// Find the root element that represents the set which `elementId` belongs to
	curNode = m_nodes[elementId];
	while(curNode->parent != NULL)
		curNode = curNode->parent;
	Node* root = curNode;

	// Walk to the root, updating the parents of `elementId`. Make those elements the direct
	// children of `root`. This optimizes the tree for future FindSet invokations.
	curNode = m_nodes[elementId];
	while(curNode != root)
	{
		Node* next = curNode->parent;
		curNode->parent = root;
		curNode = next;
	}

	return root->index;
}

void DisjointSets::Union(int setId1, int setId2)
{
	assert(setId1 < m_numElements);
	assert(setId2 < m_numElements);

	if(setId1 == setId2)
		return; // already unioned

	Node* set1 = m_nodes[setId1];
	Node* set2 = m_nodes[setId2];

	// Determine which node representing a set has a higher rank. The node with the higher rank is
	// likely to have a bigger subtree so in order to better balance the tree representing the
	// union, the node with the higher rank is made the parent of the one with the lower rank and
	// not the other way around.
	if(set1->rank > set2->rank)
		set2->parent = set1;
	else if(set1->rank < set2->rank)
		set1->parent = set2;
	else // set1->rank == set2->rank
	{
		set2->parent = set1;
		++set1->rank; // update rank
	}

	// Since two sets have fused into one, there is now one less set so update the set count.
	--m_numSets;
}

void DisjointSets::AddElements(int numToAdd)
{
	assert(numToAdd >= 0);

	// insert and initialize the specified number of element nodes to the end of the `m_nodes` array
	m_nodes.insert(m_nodes.end(), numToAdd, (Node*)NULL);
	for(int i = m_numElements; i < m_numElements + numToAdd; ++i)
	{
		m_nodes[i] = new Node();
		m_nodes[i]->parent = NULL;
		m_nodes[i]->index = i;
		m_nodes[i]->rank = 0;
	}

	// update element and set counts
	m_numElements += numToAdd;
	m_numSets += numToAdd;
}

int DisjointSets::NumElements() const
{
	return m_numElements;
}

int DisjointSets::NumSets() const
{
	return m_numSets;
}

int main()
{
        int n, m;
        S(n);S(m);

        DisjointSets ds(n);

        int x, y;
        int flag=0;
        while (m--) {
                S(x);S(y);
                if (ds.FindSet(x-1) == ds.FindSet(y-1)) {
                        flag=1;
                } else {
                        ds.Union(x-1, y-1);
                }
        }

        if (flag)
                PS("NO\n");
         else
                PS("YES\n");

        return 0;
}
