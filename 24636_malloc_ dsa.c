# include<stdio.h>
# include<stdlib.h>
int main(){
int n;
printf("enter the size array:");
scanf("%d",&n);
int*arr=(int*)malloc (n*4);
for(int i=0; i<n; i++){
print("enter the element:");
scanf("%d",&arr[i])
}
int key;
printf("enter the key:");
scanf("%d",&key);
int found=0;
for(int i=0; i<n; i++){
if(arr[i]==key){
printf("key is the index:%d",i+1);
found=1;
break;
}
if (!found){
printf("not found");
}
free(arr);
return 0;
}









