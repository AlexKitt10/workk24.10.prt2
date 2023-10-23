#include <iostream>

using namespace std;

int main()
{
    long long a, b, c = a, n, s = 10, sum = 0, num = 0;
    cin>>a, b, n;
    while (a<=b){
            while (c>=0){
                num += (c%n)*s;
                s*=10;
                c/=n;
                }
            if (num/100 == 0 && num/100000!=0)
                sum+=1;
            a+=1;
        }
    cout<<sum;
    return 0;
}
