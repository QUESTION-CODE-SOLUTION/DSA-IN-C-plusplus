#include<iostream>
using namespace std;
#include<string>
void question3(){
    string s;//="abcd";
    cin>>s;
    string s2;//="ABCDxyz";
    cin>>s2;
    //addition
    s=s+s2;
    cout<<s<<endl;
    //length
    cout<<s2.length()<<endl;
    //size
    cout<<s2.size()<<endl;
    //comparsion
    if(s.compare(s2)>0){
        cout<<"s is greater "<<endl;
    }
    else if(s2.compare(s)>0){
        cout<<"s2 is greater "<<endl;
    }
    else{
        cout<<" strings are equal"<<endl;
    }
    //string + integer
    s2=s2+to_string(235364);
    cout<<s2<<endl;

}

void question1(){
    string s;
    getline(cin,s);
    string s2;
    getline(cin,s2);
    string h="";
    int j;
    for(int i=0;i<s.size();i++){
        if(isspace(s[i])){
            j=i;
            h+=" ";
            break;
        }
        h+=s[i];
    }
    h+=s2;
    h+=" ";
    for(int i=j+1;i<s.size();i++){
        h+=s[i];
    }
    cout<<h<<endl;
}
int main()
{
   // question3();
    question1();
    
    
} 

