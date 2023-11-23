#include<stdio.h>
int isPrime(int num){
    if(num<2) {
        return 0;
    }
    int i;
    for(i=2;i*i<=num;i++){
        if(num%i==0) {
            return 0;
        }
    }
    return 1;
}
int countPrimes(int nums[],int n,int i) {
    int count=0;
    for(i=0;i<n; i++) {
        if (isPrime(nums[i])){
            count++;
        }
    }
    return count;
}
int main(){
    int n1,n2,i;
    printf("Nhap kich thuoc cua mang 1: ");
    scanf("%d",&n1);
    int nums1[n1];
    printf("Nhap cac phan tu cua mang 1:\n");
    for(i=0;i<n1;i++) {
        printf("nums1[%d]= ",i);
        scanf("%d",&nums1[i]);
    }
    printf("Nhap kich thuoc cua mang 2: ");
    scanf("%d",&n2);
    int nums2[n2];
    printf("Nhap cac phan tu cua mang 2:\n");
    for (i=0;i<n2;i++) {
        printf("nums[%d]=", i);
        scanf("%d",&nums2[i]);
    }
    int countPrimes1=countPrimes(nums1,n1,i);
    int countPrimes2=countPrimes(nums2,n2,i);
    printf("So luong so nguyen to trong mang 1: %d\n",countPrimes1);
    printf("So luong so nguyen to trong mang 2: %d\n",countPrimes2);
    if(countPrimes1==countPrimes2) {
        printf("Hai mang co so luong so nguyen to bang nhau.\n");
    } else if(countPrimes1>countPrimes2){
        printf("Mang 1 co nhieu so nguyen to hon mang 2\n");
    } else
		printf("Mang 2 co nhieu so nguyen to hon\n mang 1");
    return 0;
}

