#include<iostream>
#include<vector>
using namespace std;


vector<int> reverse(vector<int> v){
     int start=0;
     int end=v.size()-1;
     while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;

     }
     return v;
}
int print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] <<" ";
    }
    cout << endl;
}
int main(){
    vector <int> v;
    v.push_back(12);
     v.push_back(1);
      v.push_back(18);
       v.push_back(110);
        v.push_back(102);

        vector <int> ans=reverse(v);


        cout<< "printing array is: "<<endl;

        print(ans);


}