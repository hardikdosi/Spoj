#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin>>t;

	while (t--) {
		double a, b, c;

		cin>>a>>b>>c;

		if (c > 0) {
			double x1=0, x2=100002, mid;
			for (int i=0; i<100; i++) {
				mid=(x1+x2)/2;
				if ((a*mid+b*sin(mid)-c)<0) {
					x1=mid;
				} else {
					x2=mid;
				}
			}
			cout << setprecision(6) << fixed << mid << endl;
		} else {
			double x1=-100002, x2=0, mid;
			for (int i=0; i<100; i++) {
				mid=(x1+x2)/2;
				if ((a*mid+b*sin(mid)-c) < 0) {
					x1=mid;			
				} else {
					x2=mid;
				}
			}
			cout << setprecision(6) << fixed << mid << endl;
		}
	}

	return 0;
}