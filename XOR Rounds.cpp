#include<bits/stdc++.h>
using namespace std;
	
#define jadu ios_base::sync_with_stdio(false);
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define f first
#define s second
#define lelo(x) scanf("%d",&x);
#define dedo(x) printf("%d",x); 	
#define PB push_back
#define MP make_pair
#define sz(c)     (int)c.size()
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int mod = 1000000007;
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%mod; b/=2; a=(a*a)%mod; } return ans%mod; }

const int maxi =520;
int arr[maxi];
int brr[maxi];
//int crr[maxi];
int n,m,k,l,j;


int main()
{
	 
     int t;
	 scanf("%d",&t);
	 while(t--)
	 {
	   scanf("%d%d",&n,&k);
	   for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	   m = 1;
	   while(k)
	   {
	   	 if(k&1)
	   	 {
	   	         for(int i=0;i<n;i++)
			     {
			     //   trace3(arr[i],arr[(i-m+n)%n],arr[(i+m)%n]);
			       // trace3(i,(i-m+n)%n,(i+m)%n);
			  	    brr[i]  = arr[i]^arr[(i-m+n)%n]^ arr[(i+m)%n];
			  	  
				 }	
				   for(int i=0;i<n;i++)
			  	    {
			  	   	 arr[i] = brr[i];
					}
	   	 }
	   	 k>>=1;
	   	 m  = (m*2)%n;
	   	 
	   }
	   for(int i=0;i<n;i++)
	   printf("%d ",arr[i]);
	   printf("\n");
	   
	 }  
}
