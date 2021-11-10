#include <iostream.h>
#include <conio.h>

void main(){
clrscr();
         
        int n ,m ;
        cout<<"Enter Count n :";
        cin>>n;
        cout<<"enter count m :";
        cin>> m;

         
        for(int i=1; i <=n ; i++){

              for(int j=1 ;  j <=m ; j++){
                if (j% 2 == 0)
                cout<<'*';
                else
                cout<<'#'

              }
            cout<<endl;

        }

getch();
}
