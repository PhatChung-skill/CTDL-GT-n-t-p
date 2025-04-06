#include<bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int n;
	cout<<"Nhap so luong phan tu: ";cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"Nhap phan tu thu "<<(i+1)<<": ";cin>>x;
		v.push_back(x);
	}
	cout<<"Danh sach ban dau la: ";
	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	//chen phan tu vao vi tri bat ky
	int chen;
	cout<<"Nhap vi tri can chen: ";cin>>chen;
	int phantuthemvao;
	cout<<"Nhap phan tu can them vao: ";cin>>phantuthemvao;
	v.insert(v.begin()+chen,phantuthemvao);
	cout<<"Danh sach sau khi them phan tu: ";
	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	//Xoa phan tu o vi tri bat ky
	int xoa;
	cout<<"Nhap vi tri can xoa phan tu: ";cin>>xoa;
	int phantuxoa;
	v.erase(v.begin()+xoa);
	cout<<"Danh sach sau khi xoa phan tu o vi tri bat ky la: ";
	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	//check rong
	cout<<"Danh sach hien tai: ";
	if(v.empty()){
		cout<<"Rong!";
	}
	else{
	for(int x:v){
		cout<<x<<" ";
	}
	}
}