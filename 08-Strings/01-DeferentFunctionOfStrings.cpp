#include "iostream"
#include "algorithm"
#include "string"
using namespace std;

int main(){
  //1::append() function || + operator
  /*f
  //s1="fam" s2="ily" ==> s3="family"
  string str1="fam";
  string str2="ily";
  
  //1st way
  // str1.append(str2);
  // cout<<str1<<endl;
  // cout<<str2<<endl;
  
  //2nd way
  // str1=str1+str2;
  // cout<<str1<<endl;
  
  //access char form a string
  cout << str1[1] << endl;
  */
  
  //2::clear() function
  /*
  string abc="i love you i love you 2...";
  cout<<abc<<endl;
  
  abc.clear();
  cout<<abc<<endl<<endl;
  
  cout<<"clear the string"<<endl;
  */
  
  //2::compare() function
  /*
  string s1="abc";
  string s2="xyz";
  string s3="abc";
  string s4="abcdef";
  
  //if strings are equals compare function return 0
  //0=>false && 1=>true 
  //if(!s1.compare(s3)) //false=>true
  if(s1.compare(s3)==0)
    cout<<"s1 == s3 =>"<<s1.compare(s3)<<endl;
  
  //if strings are greater compare() function return (+) value
  if(s2.compare(s1)>0)
    cout<<"s2 > s1 =>"<<s2.compare(s1)<<endl;
  
  //if strings are less compare() function return (-) value
  if(s1.compare(s4)<0)
    cout<<"s1 > s4 =>"<<s1.compare(s4)<<endl;
  */
  
  //3::empty() function
  /*
  string str="jast example";
  cout<<str<<endl;
  
  str.clear();
  if(str.empty())
    cout<<"string is empty"<<endl;
  
  cout<<endl;
  
  str="something is wrong!";
  cout<<str<<endl;
  
  if(!str.empty()){
    cout<<"string is not empty"<<endl;
  }
  */
  
  //4::erase() function
  /*
  string str="nincompoop";
  
  //string_name.erase(start_element_index, number_of_erase_character);
  str.erase(2,3);
  
  cout<<str<<endl;
  */
  
  //5::find() function
  /*
  string str="i love you too";
  
  //find() function get find elements frist index
  cout << str.find("you") << endl;
  */
  
  //6::insert() function
  /*
  string str="sumit das";
  
  //string_name.insert(insert_string_index, insert_new_string);
  str.insert(5, "a");
  cout << str << endl;
  */
  
  //7::size() || length() function
  /*
  string str="sumit";
  cout << str.size() << endl;
  cout << str.length() << endl;
  cout<<endl;
  
  for (int i = 0; i < str.length(); i++) {
    cout<<str[i]<<endl;
  }
  */
  
  //8::substr() function
  /*
  string str="i love you Mama";
  //substr(start_index_of_string, copy_char_number);
  string strnew=str.substr(11, 4);
  cout<<strnew<<endl;
  */
  
  //9::stoi() function
  /*
  string str="2343";
  int x=stoi(str);
  cout<<x+2<<endl;
  */
  
  //10::to_string() function
  /*
  int x=433;
  cout<<to_string(x)+"2"<<endl;
  */
  
  //11::sort() && begin() && end() function
  /*
  string str="kdeudjutsutsiditsktyul";
  
  //get all function in algorithm header file
  // sort()=> sort this string
  // begin()=> starting idater/index
  // end()=> end idater/index
  
  sort(str.begin(), str.end());
  cout<<str<<endl;
  */
  
  //12::assign() function || = operator
  /*
  string str="i head you";
  cout<<str<<endl;
  str.assign("i love you");
  cout<<str<<endl;
  */
  
  //13::at() function || []
  /*
  string str="nincompoop";
  cout<<str.at(3)<<endl;
  cout<<str[3]<<endl;
  */
  
  //14::resize() function
  /*
  string str="nincompoop";
  cout<<str.size()<<endl;
  str.resize(6);
  cout<<str.size()<<endl;
  */
  
  //15::c_str() function
  
  string str="nincompoop";
  cout<<str<<endl;
  
  bool check=false;
  for (int i = 0; i <= str.size(); i++ ) {
    if(str[i]=='\0')
      check=true;
  }
  
  if(check)
    cout<<"terminated string"<<endl;
  else
    cout<<"null terminated string"<<endl;

  
  str.c_str();//null terminated string
  cout<<str<<endl;
  
  
  bool flag=false;
  for (int i = 0; i <= str.size(); i++ ) {
    if(str[i]=='\0')
      flag=true;
  }
  
  if(flag)
    cout<<"terminated string"<<endl;
  else
    cout<<"null terminated string"<<endl;

  return 0;
}