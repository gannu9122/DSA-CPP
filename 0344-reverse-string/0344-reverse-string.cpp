class Solution {
public:
    void reverse(vector<char>&s, int st , int e){
  
   if(st>=e)
   return;

   swap(s[st], s[e]);
    st++;
    e--;

   reverse(s,st, e);

    }
     void reverseString(vector<char>&s){
        reverse(s,0,s.size()-1);
        
    }
};

