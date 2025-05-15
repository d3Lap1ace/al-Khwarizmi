#include<iostream>
#include<string>

using namespace std;
template <typename T>

void print_type(T&&){
    cout<<"type is "<<typeid(T).name()<<endl;
}

int main(){
    string s1="abc";
    string s2="";
    string s3="123";
    string s4 = "test ";
    string s5 = "test";
    string s6 = s1 + s3;

    
    printf("address of s1 data by printf:%p\n",&s1);
    printf("type of s1 is :%s\n",typeid(&s1).name());
    print_type(&s1);
    printf("address of s1 data by cprintf:%p\n",s1.c_str());
    printf("type of s1 is :%s\n",typeid(s1).name());
    cout<<"type of s1 is :"<<typeid(s1).name()<<endl;
    printf("address of s2 data by printf:%p\n",&s2);
    printf("address of s3 data by printf:%p\n",&s3);
    printf("address of s4 data by printf:%p\n",&s4);
    printf("address of s5 data by printf:%p\n",&s5);
    printf("address of s6 data by printf:%p\n",s6.c_str());
    printf("context of s3 is %s\n",s3.c_str());
    printf("context of s6 is %s\n",s6.c_str());

    cout<<"address of s1 data:"<<&s1<<endl;
    cout<<"address of s2 data:"<<&s2<<endl;
    cout<<"address of s3 data:"<<&s3<<endl;
    cout<<"address of s4 data:"<<&s4<<endl;
    cout<<"address of s5 data:"<<&s5<<endl;

    
    
    if(s1 == s3) cout<<" equal "<<endl;
    if(&s1 == &s3) cout<<"address is equal"<<endl;
    if(s1.compare(s3) == 0) cout<<"context equal"<<endl;

    if(s3.empty()){
        cout<<"string data is empty"<<endl;
    }   
    if(s3.size() == 0){
        cout<<"string size is 0"<<endl;
    }
}