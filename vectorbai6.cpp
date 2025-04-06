#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	int n;
	cout<<"Nhap so luong phan tu: ";cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cout<<"Nhap phan tu thu "<<(i+1)<<": ";
		cin>>x;
		v.push_back(x);
	}
	cout<<"Danh sach ban nhap la: ";
	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	//tim phan tu nho nhat
	cout<<"Phan tu nho nhat la: "<<*min_element(v.begin(),v.end());
	cout<<endl;
	
	//tim phan tu lon nhat
	cout<<"Phan tu lon nhat la: "<<*max_element(v.begin(),v.end());
	cout<<endl;
	
	//Tinh tong
	//cach1
	//float sum=0;
	//for(int i=0;i<v.size();i++){
		//sum+=v[i];
	//}
	//cout<<"Tong cac phan tu la: "<<sum<<endl;
	
	//cach2
	cout<<"Tong cac phan tu la: "<<accumulate(v.begin(),v.end(),0);
	cout<<endl;
}