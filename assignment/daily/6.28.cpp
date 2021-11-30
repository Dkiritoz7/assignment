 if(j>=49)
        {
            for(int z=50;z<=76;z++)
          {
            cout<<"      "<<z;
            cout<<"        "<<transform2(z);
            cout<<"           "<<z+45;
            if(z+25>=38) cout<<"         "<<transform2(z+45);
            else cout<<"         "<<transform1(z+45);
            cout<<"           "<<z+90;
            cout<<"        "<<transform2(z+90);
             cout<<"           "<<z+135;
            cout<<"        "<<transform2(z+135);
            cout<<endl;
          }
        }
    }