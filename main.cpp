#include <iostream>

using namespace std;

class publication{
public:
publication(){}
void getData(){
  cout<<"Enter title : "<<endl;
  cin>>title;
  cout<<"Enter price : "<<endl;
  cin>>price;
}
void putData(){
  cout<<"The title is : "<< title <<endl;
  cout<<"The price is : "<< price <<endl;
}

private:
float price;
string title;


};

class book : public publication{
public:
book(){}
void getData(){
  publication::getData();
  cout<<"Number of pages : "<<endl;
  cin>>npages;

}
void putData(){
  cout<<"The number of pages is is : "<< npages <<endl;
}

private:
int npages;

};

class tape :public publication{
public:
tape(){}
void getData(){
  publication::getData();
  cout<<"Enter the playing time in minutes : "<<endl;
  cin>>ptime;
}
void putData(){
  publication::putData();
  cout<<"Playing time in minutes : "<< ptime <<endl;
  
  
  }

private:
int ptime;
};

class sales :public publication{
public:
sales(){}
void getData(){
cout<<"Enter sales of the las three months : "<<endl;
  for(int i=0;i<3;i++){
    cin>>record[i];
    cout<<",";
  }
  
}

void putData(){
  cout<<"Sales of the last three months : "<<endl;
  cout<<"Enter sales of the las three months : "<<endl;
  for(int i=0;i<3;i++){
    cout<<"sale["<<i+1<<"] : "<<record[i]<<endl;
  }
}


private:
float record[3];
};





int main(){
book* nbook = new book();
nbook -> getData();
tape* ntape = new tape();
ntape -> getData();
sales* nsales = new sales();
nsales -> getData();
  
nbook -> putData();
ntape -> putData();
nsales -> putData();
}
