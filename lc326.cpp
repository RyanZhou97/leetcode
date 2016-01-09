#include<cstdio>
#include<cmath>
class Solution {
public:
    bool static isPowerOfThree(int n) {
		double a=log(n)/log(3);
		printf("%lf\n",a);
		int b=(int)(a+0.5);
		printf("%d\n",b);
		if(abs(a-b)<1e-4) return true;
		else return false ;
	}
};
int main()
{
	Solution::isPowerOfThree(0);
}
