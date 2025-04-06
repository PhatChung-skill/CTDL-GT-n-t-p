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
	cout<<"Danh sach ban dau la: ";
	for(int x : v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	//Sap xep danh sach
	//Tang dan
	sort(v.begin(),v.end());
	cout<<"Danh sach sap xep tang dan: ";
	for(int x : v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	//giam dan
	sort(v.begin(),v.end(),greater<int>());
	cout<<"Danh sach sap xep giam dan: ";
	for(int x : v){
		cout<<x<<" ";
	}
	
}