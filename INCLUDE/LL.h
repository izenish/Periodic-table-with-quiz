
fp=fopen("Lithium.exe","r");
		if(fp==NULL)
		{
		printf("invalid");
		exit(0);
		}
		hidemouse();
		do
		{
		ch=fgetc(fp);
		putchar(ch);
		}
		while(ch!=EOF);
		back();
		cleardevice();
		{
		     fclose(fp);

		}
		getpointer();