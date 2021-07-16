#include<iostream>
#include<vector>
using namespace std;
int main(){
  // vector<data_type> name_of_vector;
  vector<int> v;
  
  // input elements in vector
  // name_of_vector.push_back(value);
  v.push_back(1);
  v.push_back(4);
  v.push_back(2);
  v.push_back(3);
  
  // get vector size using size() function
  // name_of_vector.size();
  
  // output the vector elements
  /*
  // 1::ways
  for (int i = 0; i < v.size(); i++) {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  */
  
  /*
  // 2::ways
  vector<int>::iterator it;
  
  // get frist elements from vector begin() function
  // get end elements from vector end() function
  
  for (it = v.begin(); it!=v.end(); it++) {
    cout<<*it<<" ";
  }
  cout<<endl;
  */
  
  /*
  //3::ways
  for (auto elements : v) {
    cout<<elements<<" ";
  }
  cout<<endl;
  */
  
  // remove last element from vector
  // name_of_vector.pop_back();
  /*
  v.pop_back();
  
  for (auto i : v) {
    cout<<i<<" ";
  }
  cout<<endl;
  */
  
  // vector<data_type> name_of_vector(size_of_vector, value);
  vector<int> v2(3, 30);
  
  // for (auto i : v2) {
  //   cout<<i<<" ";
  // }
  
  // swap two vector using swap() function
  // swap(v, v2);
  
  /*
  for (auto i : v) {
    cout<<i<<" ";
  }
  cout<<endl<<endl;
  
  for (auto i : v2) {
    cout<<i<<" ";
  }
  */
  
  // sort the vector using sort() function
  sort(v.begin(), v.end());
  
  for (auto i : v) {
    cout<<i<<" ";
  }
  
  // please check out https://cplusplus.com
  
  return 0;
}