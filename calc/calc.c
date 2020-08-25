#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct NMT
{

	unsigned char AddMode;
	unsigned char SubMode;
	unsigned char MulMode;
	unsigned char DivMode;
	
}NormalModeType;

typedef struct LNT
{
	unsigned char LargeNumberAdd;
	unsigned char LargeNumberSub;
	unsigned char LargeNumberMul;
}LargeNumberType;

typedef struct BCT
{
	unsigned char HexToDec;
	unsigned char HexToBin;

	unsigned char BinToHex;
	unsigned char BinToDec;

	unsigned char DecToHex;
	unsigned char DecToBin;
}BaseConvertType;


typedef struct MENUTYPE
{
	unsigned int Menu_1;  //   选择正常运算模式
	unsigned int Menu_2;  //   选择large number模式
	unsigned int Menu_3;  //   选择进制转换模式
	NormalModeType NormalModeTypeTest;
	LargeNumberType LargeNumberTypeTest;
	BaseConvertType BaseConvertTypeTest;
	
}MenuType;
	

MenuType MenuTypeTest = {0};



void SystemMessagePrint();
float NormalCalcMode(float FirPara, float SecPara, int CalcCate);




int main(int argc,char* argv[])
{

	

	unsigned int InputMenuType; /*运算模式*/
	unsigned int CalcMode;      /*正常运算类别*/
	float CalcParaOne,CalcParaTwo;
    double NormalModeCalcResult;
	
	while(1)
		{
			SystemMessagePrint();
			printf("请输入运算模式：\n");
			scanf("%d",&InputMenuType);

			switch (InputMenuType)
				{
					case 1:
						MenuTypeTest.Menu_1 = InputMenuType;
			  		 	printf("进入正常运算模式\n");
			
			    		printf("*choose a kind of calc mode*\n");
						printf("********1:add mode**********\n");
						printf("********2:sub mode**********\n");
						printf("********3:mul mode**********\n");
						printf("********4:div mode**********\n");

						scanf("%d",&CalcMode);
				
			   			printf("请输入参数1的值\n");
						scanf("%f",&CalcParaOne);
						printf("请输入参数2的值\n");
						scanf("%f",&CalcParaTwo);

						NormalModeCalcResult = NormalCalcMode(CalcParaOne, CalcParaTwo,CalcMode);
						printf("%lf", NormalModeCalcResult);
						printf("\n");
				
						break;
				
					case 2:
						MenuTypeTest.Menu_2 = InputMenuType;
						printf("进入大数运算模式\n");

						break;
					case 3:
						MenuTypeTest.Menu_3 = InputMenuType;
						printf("进入进制转换模式\n");

						break;
					default:
						printf("输入错误\n");
						break;
				}			
		}


}



/**********************************************************************
*函数名称：SystemMessagePrint(*)
*功能描述：打印功能信息
*输入参数：无
*输出参数：无
*返回值：无
*其他说明：无
*
*修改日期          版本号         修改人        修改内容
*------------------------------------------------
*2020/8/20     V1.0        guoyong    create
*
**********************************************************************/
 void SystemMessagePrint()
{
	printf("********Menu 1:normal mode*****************\n");
	printf("********Menu 2:large number mode***********\n");
	printf("********Menu 3:base conversion mode********\n");
}


#if 0

#endif

/**********************************************************************
*函数名称：NormalCalcMode()
*功能描述：实现正常运算功能，包括加减乘除
*输入参数：参数1，参数2，运算类别
*输出参数：运算结果
*返回值：
*其他说明：无
*
*修改日期          版本号         修改人        修改内容
*------------------------------------------------
*2020/8/20     V1.0        guoyong    create
*
**********************************************************************/

 float NormalCalcMode(float FirPara, float SecPara, int CalcCate)
{

	
	
	switch (CalcCate)
		{
			case 1:
				MenuTypeTest.NormalModeTypeTest.AddMode = 1;
				break;
			case 2:
				MenuTypeTest.NormalModeTypeTest.SubMode = 1;
				break;
			case 3:
				MenuTypeTest.NormalModeTypeTest.MulMode = 1;
				break;
			case 4:
				MenuTypeTest.NormalModeTypeTest.DivMode = 1;
				break;
			default:
				break;
		}
	if(MenuTypeTest.NormalModeTypeTest.AddMode)
		{
			MenuTypeTest.NormalModeTypeTest.AddMode = 0;
			return FirPara+SecPara;
		}
	if(MenuTypeTest.NormalModeTypeTest.SubMode)
		{
			MenuTypeTest.NormalModeTypeTest.SubMode = 0;
			return FirPara-SecPara;
		}
	if(MenuTypeTest.NormalModeTypeTest.MulMode)
		{
			MenuTypeTest.NormalModeTypeTest.MulMode = 0;
			return FirPara*SecPara;
		}
	if(MenuTypeTest.NormalModeTypeTest.DivMode)
		{
			MenuTypeTest.NormalModeTypeTest.DivMode = 0;
			return FirPara/SecPara;
		}

}










