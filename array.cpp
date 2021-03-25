using namespace std;
#include<iostream>

int main()
{
    cout<<"Hello World"<<endl;
    int choice;
    int arr[5]={1,2,3,4,5};
    int element;
    cout<<"Please enter your option"<<endl;
    cout<<"1: Add at end"<<endl;
    cout<<"2: Add at begin"<<endl;
    cout<<"3: Update index"<<endl;
    cout<<"4: Delete at end"<<endl;
    cout<<"5: Delete at begin"<<endl;
    cout<<"6: Exit Program"<<endl;
    cin>>choice;
cout>>"hrllo this is dipali";
    if(choice>0 && choice <7)
    {
   //cout<<choice<<endl;

    switch(choice)
    {
    case 1:


        cout<<"Enter new element"<<endl;
        cin>>element;
       // std::cout << element << std::endl;
         int arr1[6];
         for(int i=0;i<5;i++)
         {
            arr1[i]=arr[i];
         }
        arr1[5]={element};
        for(int j=0;j<6;j++)
        {
            cout<<arr1[j];
        }
         break;
    case 2:

        cout<<"Enter new element"<<endl;
        cin>>element;
       // std::cout << element << std::endl;
         int arr2[6];
        for(int i=6;i>=0;i--)
        {
            arr2[i]=arr[i-1];
        }

        arr2[0]={element};

        for(int j=0;j<6;j++)
        {
            cout<<arr2[j];
        }
        break;
    case 3:
        int index;
        cout<<"Enter index"<<endl;
        cin>>index;
        cout<<"Enter new element"<<endl;
        cin>>element;
       // std::cout << element << std::endl;

       int arr3[6];

        for(int i=0;i<5;i++)
         {
            arr3[i]=arr[i];
         }

       for(int i=6;i>=index;i--)
       {
           arr3[i]=arr3[i-1];
       }
       arr3[index]={element};

        for(int j=0;j<6;j++)
        {
            cout<<arr3[j];
        }

        break;

        case 4:

        int arr4[4];
        for(int i=0;i<4;i++)
         {
            arr4[i]=arr[i];
         }
        for(int j=0;j<4;j++)
        {
            cout<<arr4[j];
        }
        break;

        case 5:

        int arr5[4];
        for(int i=0;i<4;i++)
         {
            arr5[i]=arr[i+1];
         }
          for(int j=0;j<4;j++)
        {
            cout<<arr5[j];
        }
        break;

        case 6:
        cout<<"exited the programm"<<endl;
        return -1;
        break;
    }

    }
    else
    {
        cout<<"Please enter valid choice:"<<endl;
    }
    return 0;
}
cout>>"hrllo this is dipali";
cout>>"byeeeeeeeeeeeeeeeeeeee
    ";
