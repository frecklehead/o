#include<iostream>
using namespace std;
bool checke(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                cnt++;
            }
        }
        if(nums[n-1]>nums[0]){
            cnt++;
        }
        return cnt<=1;
    }

int main(){
int n;
int arr[n];
for( int i=0;i<n;i++) cin>>arr[i];
checke(arr);
}