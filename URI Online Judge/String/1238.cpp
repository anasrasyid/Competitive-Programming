#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string s1,s2;
        string s3 ="";
        cin>>s1>>s2;
        int ls1 =0;
        int ls2 =0;
        int j =0;
        while(ls1 < s1.length() && ls2 < s2.length()){
            if(j % 2 == 0){
                s3 = s3 + s1[ls1];
                ls1++;
            }else{ 
                s3 = s3 + s2[ls2];
                ls2++;
            }
            j++;
        }
        while(ls1 < s1.length()){
            s3 = s3 + s1[ls1];
            ls1++;
        }
        while(ls2 < s2.length()){
            s3 = s3 + s2[ls2];
            ls2++;
        }
        cout<<s3<<endl;
    }
    
    return 0;
}
