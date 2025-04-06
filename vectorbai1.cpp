#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int n;
	cout<<"Nhap so luong phan tu: ";cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"Nhap phan tu thu "<<(i+1)<<": ";cin>>x;
		v.push_back(x);
	}
	for(int x:v){
		cout<<x<<" ";
	}
	
	//them 1 phan tu vao cuoi
	cout<<endl;
	int themcuoi;
	cout<<"Nhap gia tri phan tu can them vao cuoi: ";cin>>themcuoi;
	v.insert(v.end(),themcuoi);
	cout<<"Danh sach khi them 1 phan tu vao cuoi la: ";
	for(int x:v){
		cout<<x<<" ";
	}
	
	//Xoa phan tu cuoi vector
	cout<<endl;
	v.pop_back();
	cout<<"Danh sach khi xoa 1 phan tu cuoi la: ";
	for(int x:v){
		cout<<x<<" ";
	}
	
	//Ktra rong
	cout<<endl;
	cout<<"Danh sach hien tai la: ";
	if(v.empty()){
		cout<<"Rong";
	}
	else{
		for(int x:v){
		cout<<x<<" ";
	}
	}
	
}
