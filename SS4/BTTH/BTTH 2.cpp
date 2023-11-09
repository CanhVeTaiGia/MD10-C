#include <stdio.h> 
int main(){
  //1. Nhap diem html, css, javascript
  float markHtml, markCss, markJavascript;
  printf("Nhap vao diem html, css, javascript cua sinh vien: "); 
  scanf("%f %f %f", &markHtml, &markCss, &markJavascript);
  //2. Tinh diem trung binh sinh vien
  float avgMark = (markHtml + markCss + markJavascript) / 3; 
  //3. In ra xep loai sinh vien
  if (avgMark < 5){
    printf("Xep loai sinh vien: Yeu");
  }else if (avgMark < 7){
    printf("Xep loai sinh vien: Trung binh");
  }else if (avgMark < 8){
    printf("Xep loai sinh vien: Kha");
  }else if (avgMark < 9){
    printf("Xep loai sinh vien: Gioi");
  }else{
    printf("Xep loai sinh vien: Xuat sac");
  }
}
