#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char mf33[9][3][4] =
{
{{"..."},{"..."},{"..c"}},
{{"*.."},{"..."},{"..c"}},
{{"..."},{"..."},{"..."}},
{{"***"},{"..."},{"..c"}},
{{"..."},{"..."},{"..."}},
{{"***"},{"*.."},{"*.c"}},
{{"..."},{"..."},{"..."}},
{{"..."},{"..."},{"..."}},
{{"***"},{"***"},{"**c"}}
};

char mf34[12][3][5]=
{
{{"...."},{"...."},{"...c"}},
{{"*..."},{"...."},{"...c"}},
{{"**.."},{"...."},{"...c"}},
{{"*..."},{"*..."},{"*..c"}},
{{"****"},{"...."},{"...c"}},
{{"...."},{"...."},{"...."}},
{{"**.."},{"**.."},{"**.c"}},
{{"...."},{"...."},{"...."}},
{{"****"},{"**.."},{"**.c"}},
{{"...."},{"...."},{"...."}},
{{"...."},{"...."},{"...."}},
{{"****"},{"****"},{"***c"}}
};

char mf35[15][3][6] =
{
{{"....."},{"....."},{"....c"}},
{{"*...."},{"....."},{"....c"}},
{{"**..."},{"....."},{"....c"}},
{{"***.."},{"....."},{"....c"}},
{{"**..."},{"*...."},{"*...c"}},
{{"***.."},{"*...."},{"*...c"}},
{{"**..."},{"**..."},{"**..c"}},
{{"*****"},{"*...."},{"*...c"}},
{{"....."},{"....."},{"....."}},
{{"*****"},{"**..."},{"**..c"}},
{{"....."},{"....."},{"....."}},
{{"*****"},{"***.."},{"***.c"}},
{{"....."},{"....."},{"....."}},
{{"....."},{"....."},{"....."}},
{{"*****"},{"*****"},{"****c"}}
};

char mf43[12][4][4] =
{
{{"..."},{"..."},{"..."},{"..c"}},
{{"*.."},{"..."},{"..."},{"..c"}},
{{"*.."},{"*.."},{"..."},{"..c"}},
{{"***"},{"..."},{"..."},{"..c"}},
{{"*.."},{"*.."},{"*.."},{"*.c"}},
{{"..."},{"..."},{"..."},{"..."}},
{{"***"},{"***"},{"..."},{"..c"}},
{{"..."},{"..."},{"..."},{"..."}},
{{"***"},{"***"},{"*.."},{"*.c"}},
{{"..."},{"..."},{"..."},{"..."}},
{{"..."},{"..."},{"..."},{"..."}},
{{"***"},{"***"},{"***"},{"**c"}}
};

char mf44[16][4][5] =
{
{{"...."},{"...."},{"...."},{"...c"}},
{{"*..."},{"...."},{"...."},{"...c"}},
{{"**.."},{"...."},{"...."},{"...c"}},
{{"**.."},{"*..."},{"...."},{"...c"}},
{{"****"},{"...."},{"...."},{"...c"}},
{{"****"},{"*..."},{"...."},{"...c"}},
{{"****"},{"**.."},{"...."},{"...c"}},
{{"****"},{"*..."},{"*..."},{"*..c"}},
{{"****"},{"****"},{"...."},{"...c"}},
{{"...."},{"...."},{"...."},{"...."}},
{{"****"},{"****"},{"*..."},{"*..c"}},
{{"...."},{"...."},{"...."},{"...."}},
{{"****"},{"****"},{"**.."},{"**.c"}},
{{"...."},{"...."},{"...."},{"...."}},
{{"...."},{"...."},{"...."},{"...."}},
{{"****"},{"****"},{"****"},{"***c"}}
};

char mf45[20][4][6] =
{
{{"....."},{"....."},{"....."},{"....c"}},
{{"*...."},{"....."},{"....."},{"....c"}},
{{"**..."},{"....."},{"....."},{"....c"}},
{{"***.."},{"....."},{"....."},{"....c"}},
{{"**..."},{"**..."},{"....."},{"....c"}},
{{"*****"},{"....."},{"....."},{"....c"}},
{{"***.."},{"***.."},{"....."},{"....c"}},
{{"*****"},{"**..."},{"....."},{"....c"}},
{{"*****"},{"***.."},{"....."},{"....c"}},
{{"*****"},{"**..."},{"*...."},{"*...c"}},
{{"*****"},{"*****"},{"....."},{"....c"}},
{{"*****"},{"**..."},{"**..."},{"**..c"}},
{{"*****"},{"*****"},{"*...."},{"*...c"}},
{{"....."},{"....."},{"....."},{"....."}},
{{"*****"},{"*****"},{"**..."},{"**..c"}},
{{"....."},{"....."},{"....."},{"....."}},
{{"*****"},{"*****"},{"***.."},{"***.c"}},
{{"....."},{"....."},{"....."},{"....."}},
{{"....."},{"....."},{"....."},{"....."}},
{{"*****"},{"*****"},{"*****"},{"****c"}}
};

char mf53[15][5][4] =
{
{{"..."},{"..."},{"..."},{"..."},{"..c"}},
{{"*.."},{"..."},{"..."},{"..."},{"..c"}},
{{"*.."},{"*.."},{"..."},{"..."},{"..c"}},
{{"***"},{"..."},{"..."},{"..."},{"..c"}},
{{"***"},{"*.."},{"..."},{"..."},{"..c"}},
{{"*.."},{"*.."},{"*.."},{"*.."},{"*.c"}},
{{"***"},{"***"},{"..."},{"..."},{"..c"}},
{{"***"},{"***"},{"*.."},{"..."},{"..c"}},
{{"..."},{"..."},{"..."},{"..."},{"..."}},
{{"***"},{"***"},{"***"},{"..."},{"..c"}},
{{"..."},{"..."},{"..."},{"..."},{"..."}},
{{"***"},{"***"},{"***"},{"*.."},{"*.c"}},
{{"..."},{"..."},{"..."},{"..."},{"..."}},
{{"..."},{"..."},{"..."},{"..."},{"..."}},
{{"***"},{"***"},{"***"},{"***"},{"**c"}}
};

char mf54[20][5][5] =
{
{{"...."},{"...."},{"...."},{"...."},{"...c"}},
{{"*..."},{"...."},{"...."},{"...."},{"...c"}},
{{"**.."},{"...."},{"...."},{"...."},{"...c"}},
{{"*..."},{"*..."},{"*..."},{"...."},{"...c"}},
{{"****"},{"...."},{"...."},{"...."},{"...c"}},
{{"*..."},{"*..."},{"*..."},{"*..."},{"*..c"}},
{{"****"},{"**.."},{"...."},{"...."},{"...c"}},
{{"****"},{"**.."},{"*..."},{"...."},{"...c"}},
{{"****"},{"****"},{"...."},{"...."},{"...c"}},
{{"****"},{"****"},{"*..."},{"...."},{"...c"}},
{{"****"},{"****"},{"**.."},{"...."},{"...c"}},
{{"****"},{"****"},{"*..."},{"*..."},{"*..c"}},
{{"****"},{"****"},{"****"},{"...."},{"...c"}},
{{"...."},{"...."},{"...."},{"...."},{"...."}},
{{"****"},{"****"},{"****"},{"*..."},{"*..c"}},
{{"...."},{"...."},{"...."},{"...."},{"...."}},
{{"****"},{"****"},{"****"},{"**.."},{"**.c"}},
{{"...."},{"...."},{"...."},{"...."},{"...."}},
{{"...."},{"...."},{"...."},{"...."},{"...."}},
{{"****"},{"****"},{"****"},{"****"},{"***c"}}
};

char mf55[25][5][6] =
{
{{"....."},{"....."},{"....."},{"....."},{"....c"}},
{{"*...."},{"....."},{"....."},{"....."},{"....c"}},
{{"**..."},{"....."},{"....."},{"....."},{"....c"}},
{{"***.."},{"....."},{"....."},{"....."},{"....c"}},
{{"**..."},{"**..."},{"....."},{"....."},{"....c"}},
{{"*****"},{"....."},{"....."},{"....."},{"....c"}},
{{"***.."},{"***.."},{"....."},{"....."},{"....c"}},
{{"*****"},{"**..."},{"....."},{"....."},{"....c"}},
{{"*****"},{"***.."},{"....."},{"....."},{"....c"}},
{{"*****"},{"**..."},{"**..."},{"....."},{"....c"}},
{{"*****"},{"*****"},{"....."},{"....."},{"....c"}},
{{"*****"},{"***.."},{"***.."},{"....."},{"....c"}},
{{"*****"},{"*****"},{"**..."},{"....."},{"....c"}},
{{"*****"},{"*****"},{"***.."},{"....."},{"....c"}},
{{"*****"},{"*****"},{"**..."},{"*...."},{"*...c"}},
{{"*****"},{"*****"},{"*****"},{"....."},{"....c"}},
{{"*****"},{"*****"},{"**..."},{"**..."},{"**..c"}},
{{"*****"},{"*****"},{"*****"},{"*...."},{"*...c"}},
{{"....."},{"....."},{"....."},{"....."},{"....."}},
{{"*****"},{"*****"},{"*****"},{"**..."},{"**..c"}},
{{"....."},{"....."},{"....."},{"....."},{"....."}},
{{"*****"},{"*****"},{"*****"},{"***.."},{"***.c"}},
{{"....."},{"....."},{"....."},{"....."},{"....."}},
{{"....."},{"....."},{"....."},{"....."},{"....."}},
{{"*****"},{"*****"},{"*****"},{"*****"},{"****c"}}
};

int main(int argc,char **argv){
	int caseno,i,j,k,l;
	int T;
	int R,C,M,printmf,r1,r2,c1,c2;
	char mf[5][5];
	FILE *fin,*fout;


	fin=fopen("C-small-attempt0.in","rt");
	fout=fopen("C-small-attempt0.out","wt");
	//fin=fopen("test.txt","rt");
	//fout=fopen("result.out","wt");


	fscanf(fin,"%d",&T);
	for(caseno=1;caseno<=T;caseno++){
		fscanf(fin,"%d %d %d",&R,&C,&M);
		fprintf(fout,"Case #%d:\n",caseno);

				if((R>2)&&(C>2)){
		if(!((M==R*C-2)||(M==R*C-3)||(M==R*C-5)||(M==R*C-7))){
			switch(R){
			case 3:
				switch(C){
				case 3:
					for(i=0;i<3;i++)
						fprintf(fout,"%s\n",mf33[M][i]);
					break;
				case 4:
					for(i=0;i<3;i++)
						fprintf(fout,"%s\n",mf34[M][i]);
					break;
				case 5:
					for(i=0;i<3;i++)
						fprintf(fout,"%s\n",mf35[M][i]);
					break;
				}
				break;
			case 4:
				switch(C){
				case 3:
					for(i=0;i<4;i++)
						fprintf(fout,"%s\n",mf43[M][i]);
					break;
				case 4:
					for(i=0;i<4;i++)
						fprintf(fout,"%s\n",mf44[M][i]);
					break;
				case 5:
					for(i=0;i<4;i++)
						fprintf(fout,"%s\n",mf45[M][i]);
					break;
				}
				break;
			case 5:
				switch(C){
				case 3:
					for(i=0;i<5;i++)
						fprintf(fout,"%s\n",mf53[M][i]);
					break;
				case 4:
					for(i=0;i<5;i++)
						fprintf(fout,"%s\n",mf54[M][i]);
					break;
				case 5:
					for(i=0;i<5;i++)
						fprintf(fout,"%s\n",mf55[M][i]);
					break;
				}
				break;
			}
		}
		else {
			fprintf(fout,"Impossible\n");
		}
		}

		else {
		printmf=0;
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				mf[i][j]='.';
			}
		}
		if(M==0){
			printmf=1;
			mf[R-1][C-1]='c';
		}
		if(M==(R*C-1)){
			printmf=1;
			for(i=0;i<R;i++)
				for(j=0;j<C;j++)
					mf[i][j]='*';
			mf[R-1][C-1]='c';
		}

		if(R==1){
			printmf=1;
			for(i=0;i<M;i++)
				mf[0][i]='*';
			mf[0][C-1]='c';
		}
		else if(C==1){
			printmf=1;
			for(i=0;i<M;i++)
				mf[i][0]='*';
			mf[R-1][0]='c';
		}
		else if(R==2){
			if((M!=(R*C-2))&&(M%2==0)){
				printmf=1;
				for(i=0;i<M/2;i++){
					mf[0][i]='*';
					mf[1][i]='*';
				}
				mf[1][C-1]='c';
			}
		}
		else if(C==2){
			if((M!=(R*C-2))&&(M%2==0)){
				printmf=1;
				for(i=0;i<M/2;i++){
					mf[i][0]='*';
					mf[i][1]='*';
				}
				mf[R-1][1]='c';
			}
		}

		if(printmf){
			for(i=0;i<R;i++){
				for(j=0;j<C;j++)
					fprintf(fout,"%c",mf[i][j]);
				fprintf(fout,"\n");
			}
		}
		else{
			fprintf(fout,"Impossible\n");
		}

		}
	}
	fclose(fout);
	fclose(fin);

	return 0;
}