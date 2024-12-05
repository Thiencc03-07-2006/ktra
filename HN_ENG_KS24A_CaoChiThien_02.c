#include <stdio.h>

int main(){
	int arr[100],n,i,j,type,max1,max2,index[100],check=0,count,num,indexArr,save,start,end,flag,mid,check2;
	do{
		i=0;
		count=0;
		printf("\t\tMENU\n");
		printf("\t1. Nhap so phan tu va gia tri cho mang\n");
		printf("\t2. In ra gia tri cac phan tu trong mang\n");
        printf("\t3. Dem so luong cac phun tu chan le trong mang\n");
        printf("\t4. Tim gia tri lon thu hai trong mang\n");
        printf("\t5. Them mot phan tu vao dau mang\n");
        printf("\t6. Xoa mot phan tu trong mang\n");
        printf("\t7. Sap xep mang theo thu tu giam dan\n");
        printf("\t8. Tim kiem phan tu xem no co trong mang khong\n");
        printf("\t9. In ra toan bo so nguyen to trong mang da duoc binh phuong\n");
        printf("\t10. Sap xep mang theo thu tu giam dan\n");
        printf("\t11. Thoat\n");
        printf("lua chon cua ban: ");
        scanf("%d",&type);
        switch(type){
        	i=0;
        	case 1:
        		printf("vui long nhap do dai cua mang: ");
        		scanf("%d",&n);
        		while(i<n){
        			printf("vui long vi tri %d cua mang: ",i);
        			scanf("%d",&arr[i]);
        			i++;
				}
				check=1;
				check2=0;
				break;
			case 2:
				if(check){
					while(i<n){
						printf("arr[%d]=%d, ",i,arr[i]);
						i++;
					}
				}
				break;
			case 3:
				if(check){
					while(i<n){
						if(arr[i]%2==0){
							count++;
						}
						i++;
					}
					printf("co %d so chan va %d so le",count,n-count);
				}
				break;
			case 4:
				if(check){
					max1=arr[0];
					while(i<n){
						if(max1<arr[i]){
							max1=arr[i];
						}
						i++;
					}
					i=0;
					while(i<n){
						max2=arr[i];
						if(max2!=max1){
							break;
						}
						i++;
					}
					i=0;
					while(i<n){
						if(max2<arr[i]&&arr[i]!=max1){
							max2=arr[i];
						}
						i++;
					}
					printf("so lon thu 2 la %d",max2);
				}
				break;
			case 5:
				if(check){
					printf("vui long gia tri muon them vao dau mang: ");
        			scanf("%d",&num);
					while(n-i>0){
						arr[n-i]=arr[n-i-1];
						i++;
					}
					arr[0]=num;
					n++;
				}
				break;
			case 6:
				if(check){
					printf("vui long vi tri muon xoa trong mang: ");
        			scanf("%d",&num);
					if(num>=0&&num<n){
						i=num;
						while(i<n-1){
							arr[i]=arr[i+1];
							i++;
						}
						n--;
					}else{
						printf("vi tri khong ton tai trong mang");
					}
				}
				break;
			case 7:
				if(check){
					while(i<n){
						save=arr[i];
						j=i-1;
						while(j>=0&&arr[j]>save){
							arr[j+1]=arr[j];
							j=j-1;
						}
						arr[j+1]=save;
						i++;
					}
				}
				break;
			case 8:
				if(check){
					if(check2){
					start=0;
					end=n-1;
					flag=-1;
					printf("vui long nhap so can tim: ");
					scanf("%d",&num);
					while(start>=end){
						mid=(start+end)/2;
						if(arr[mid],num){
						end=mid-1;
						}else if(arr[mid]<num){
							start=mid+1;
						}else{
							printf("phan tu o vi tri %d\n",mid);
							flag=0;
							break;
						}
					}
					if(flag){
						printf("khong co phan tu trong mang");
					}
					}else{
						printf("vui long sap xep");
					}
				}
				break;
			case 9:
				if(check){
					indexArr=0;
					while(i<n){
						count=0;
						j=2;
						while(j<arr[i]){
							if(arr[i]%j==0){
								count++;
								break;
							}
							j++;
						}
						if(count==0){
							index[indexArr]=i;
							indexArr++;
						}
						i++;
					}
					if(indexArr){
						printf("cac so nguyen da duc binh phuong to la: ");
						i=0;
						while(i<indexArr){
							printf("%d, ",arr[index[i]]*arr[index[i]]);
							i++;
						}
					}else{
						printf("khong co so nguyen trong mang");
					}
				}
				break;
			case 10:
				if(check){
					while(i>n-1){
						while(j>n-i-1){
							if(arr[j]<arr[j+1]){
								save=arr[j];
								arr[j]=arr[j+1];
								arr[j+1]=save;
							}
							j++;
						}
						i++;
					}
					check2=1;
				}
				break;
        }
        printf("\n--------------------------------------------\n");
    }while(type!=11);
    return 0;
}
