class Solution {
public:
     void computelps(vector<int>&lps,string part,int n)
     {
         int i=1,len=0;
         while(i<n)
         {
             if(part[len]==part[i])
             {
                
                 len++;
                 lps[i]=len;
                 i++;
             }
             else
             {
                 if(len!=0) len=lps[len-1];
                 else 
                 {
                     lps[i]=0;
                     i++;
                 }
             }
         }
     }
   int kmp(string &s, string &part,int &startindex,vector<int>&lps,int n,int m)
   {
         int   i=0,j=0;
           
             while(i<m&&j<n)
             {
                  if(s[i]==part[j])
                 {
                    
                     i++;
                     j++;
                 }
                 else
                 {
                     if(j!=0) j=lps[j-1];
                     else i++;
                 }
                 if(j==n) break;
             }
          if(j==n)   startindex=i-j;
            else startindex=-1;
            return startindex;
   }
    string removeOccurrences(string s, string part) {
        int n=part.size();
        vector<int>lps(n,0);
        int m=s.size();
        computelps(lps,part,n);
        bool flag=true;
         int i=0,j=0,startindex;
        while(kmp(s,part,startindex,lps,n,m)!=-1)
        {    
            s.erase(startindex,n);
             m-=n;
        }
        return s;

    }
};