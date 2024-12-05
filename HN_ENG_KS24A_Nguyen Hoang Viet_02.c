#include <stdio.h>
int main(){
	int choice;
	int arr[100];
	int n = sizeof(arr[100])/sizeof(arr[0]);
	int index;
	int i;
	int max;
	int sochan, sole;
	do{
		printf("\nMENU\n");
		printf("1. Nhap so phan tu va gia tri\n");
		printf("2. In ra cac phan tu\n");
		printf("3. Dem so luong cac phan tu chan le trong mang\n");
		printf("4. Gia tri lon thu hai trong mang\n");
		printf("5. Them mot phan tu vao dau mang\n");
		printf("6. Xoa mot phan tu trong mang\n");
		printf("7. Sap xep mang theo thu tu giam dan\n");
		printf("8. Tim kiem mot phan tu co trong mang\n");
		printf("9. In ra toan bo so nguyen to co trong mang\n");
		printf("10. Sap xep mang theo thu tu giam dan (Buble sort)\n");
		printf("11. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Nhap gia tri phan tu thu arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
			case 2:
				for(i =0; i<n; i++){
					printf("cac phan tu trong mang: %d\n", arr[i]);
				}
				break;
			case 3:
				
				for(int i =0; i<n; i++){
					if(arr[i] % 2 == 0){
						sochan++;
					}else{
						sole++;
					}															
				}
				printf("so luong so chan la: %d\n", sochan);
				printf("so luong so le la: %d\n", sole);
				break;
			case 4:
				max = arr[0];
				for(i = 1; i<n; i++){
					if(arr[i]< max){
						max = arr[i-1];
						printf("so lon thu hai la %d", max);
					}
				}
				break;
			case 5:
                if(n<100) {
                    printf("Nhap gia tri phan tu can them: ");
                    int new_value;
                    scanf("%d", &new_value);
                    	for (i = n; i > 0; i--){
                        arr[i] = arr[i - 1];
                    }
                    arr[0] = new_value;
                    n++;
                }				
				break;
			case 6:
				printf("nhap vi tri can xoa ");
				scanf("%d", &index);
				if(index >=0 && index <n){
					for(i =index; i<n-1; i++){
						arr[i]=arr[i+1];
					}
					n--;
				}else{
					printf("khong hop le");
				}
				break;
			case 7:
                for(i = 0; i < n- 1; i++){
                    for(int j = i+1; j <n; j++){
                        if(arr[i]< arr[j]){
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
				printf("Mang da duoc sap xep giam dan");			
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
                for (i =0; i <n- 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] < arr[j + 1]) {
                            int temp=arr[j];
                            arr[j]=arr[j +1];
                            arr[j+1]=temp;
                        }
                    }
                }
				printf("Mang da duoc sap xep giam dan");		
				break;
			case 11:
				printf("Thoat chuong trinh");
				break;
			default:
				printf("Khong hop le");
				break;
		}
	}while(choice != 12);
	
	
	
	
	return 0;
}
