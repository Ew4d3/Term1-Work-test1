#include <iostream>
using namespace std; //instead of putting aids at start of every standard name

/*
    multiline comments 
    or sum 
    bs
*/

int main(){ //func called main always entry point of program

    cout<<"enter your name"<<endl;
    string name1;
    cin>>name1;
    cout<<"hello "<< name1<<"!"<<endl;

    int length = name1.length();
    for (int i = 1; i <= length+7; ++i)
        cout<<"=";
    cout<<"\n";



    cout<<"name length is "<<length<<endl;
   
    cout << "enter your age \n"; //can put /n inline
    int age;
    cin>>age;
    if (age<18)
            cout<<"too young"<<endl;

    else if (age >30)
        cout <<"too old"<<endl;

    else if(age==18)
        cout<<"right age \n";
     
    main(); 

    return 0;

}



 