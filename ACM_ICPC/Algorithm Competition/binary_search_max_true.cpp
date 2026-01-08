#include <stdio.h>

int check(int mid){
    return mid <= 10;
}

int binary_search_max_true(int l,int r){
    int ans = -1;

    while(l <= r){
        int mid = l + (r - l)/2;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return ans;
}

int main(){
    int result = binary_search_max_true(0,20);
    printf("%d",result);
}