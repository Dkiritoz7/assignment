   cout<<"Celsius temperatures of Fahrenheit equivalents:"<<endl;
    for(int i=1;i<=4;i++)
    {
        cout<<"Fahrenheit equivalents"<<"\t";
    }
    cout<<endl;
    for(int j=32;j<=77;j++)
    {
        cout<<"      "<<j;
        cout<<"         "<<transform2(j);
        cout<<"           "<<j+25;
        cout<<"         "<<transform2(j+45);
        cout<<"           "<<j+50;
        cout<<"        "<<transform2(j+50);
        cout<<"           "<<j+75;
        cout<<"        "<<transform2(j+75);
        cout<<endl;
        if(j>=9)
        {
          for(int z=10;z<=24;z++)
          {
            cout<<"     "<<z;
            cout<<"         "<<transform2(z);
            cout<<"           "<<z+25;
            if(z+25>=38) cout<<"        "<<transform2(z+25);
            else cout<<"         "<<transform2(z+25);
            cout<<"           "<<z+50;
            cout<<"        "<<transform2(z+50);
             cout<<"           "<<z+75;
            cout<<"        "<<transform2(z+75);
            cout<<endl;
          }
        }
       
    }
    return 0;