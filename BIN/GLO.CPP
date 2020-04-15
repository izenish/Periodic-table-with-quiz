#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{int choice,b;
 clrscr();
 printf("-------------***********************Glossary***********************-------------");
 printf("\n================================================================================");
 printf("\n1.Periodic Table    \t\t\t 2.Element");
 printf("\n3.Atom              \t\t\t 4.Symbol");
 printf("\n5.Group             \t\t\t 6.Period");
 printf("\n7.Valency           \t\t\t 8.Oxidation State");
 printf("\n9.Compound          \t\t\t 10.Ion");
 printf("\n11.Atomic Number    \t\t\t 12.Atomic Weight");
 printf("\n13.Metal            \t\t\t 14.Non-metal");
 printf("\n15.Alkali Metal     \t\t\t 16.Alkaline Earth Metal");
 printf("\n17.Isotope          \t\t\t 18.Half-Life");
 printf("\n19.Lanthanide       \t\t\t 20.Actinides");
 printf("\n21.Configuration    \t\t\t 22.Halogens");
 printf("\n23.Family           \t\t\t 24.Block");
 printf("\n25.Malleability     \t\t\t 26.Ductile");
 printf("\n27.Noble Gases      \t\t\t 28.Transition Metal");
 printf("\n29.Valence Electron \t\t\t 30.Electronegativity");
 printf("\n31.Exit");
 printf("\n================================================================================");
 printf("enter the choice:");
 scanf("%d",&choice);
 if(choice==1)
 {printf("\nPeroidic table is the tubular display of the chemical elements which are arranged by atomic number, electronic confifuration, and recurring chemical properties.It shows peroidic trends.");
 printf("\n\n================================================================================");
 }
 else if(choice==2)
 {printf("\nAn element is a substance whose atoms have the same number of protons. It cannot be broken down using chemical reactions.");
  printf("\n\n================================================================================");
 }
 else if(choice==3)
 {printf("\nAtoms are the basic units of matter and the defining structure of element. It is composed of protons, neutrons and electrons.");
 printf("\n\n================================================================================");
 }
 else if(choice==4)
 {printf("\nSymbol is a notation of one or two letters representing a element.");
 printf("\n\n================================================================================");
 }
 else if(choice==5)
 {printf("\nGroups is a column of element in the periodic table of the chemical elements.");
 printf("\n\n================================================================================");
 }
 else if(choice==6)
 {printf("\nPeriod is a row of element in the periodic table of the chemical elements.");
 printf("\n\n================================================================================");
 }
 else if(choice==7)
 {printf("\nValency of an element is a measure of its combining power with other atoms when it forms chemical compounds or molecules.");
 printf("\n\n================================================================================");
 }
 else if(choice==8)
 {printf("\nOxidation state is the degree of loss of electrons of an atom in a chemical compounds.");
 printf("\n\n================================================================================");
 }
 else if(choice==9)
 {printf("\nCompound is a substance formed when two or more different atoms are chemically bonded together.");
  printf("\n\n================================================================================");
 }
 else if(choice==10)
 {printf("\nAn ion is an atom or group of atoms in which the number of electron s is different from the number of proton s.");
  printf("\n\n================================================================================");
 }
 else if(choice==11)
 {printf("\nAtomic Number is the number of protons found in the nucleus of an atom.");
  printf("\n\n================================================================================");
 }
 else if(choice==12)
 {printf("\nAtomic weight is the average mass of atoms of an element, calculated using relative abundance of isotopes in a naturally occuring element.");
 printf("\n\n================================================================================");
 }
 else if(choice==13)
 {printf("\nMetal is an element readily forms positive ions and has metallic bonds.");
  printf("\n\n================================================================================");
 }
 else if(choice==14)
 {printf("\nNon-Metal is a chemical element that mostly lacks metallic attributes.");
 printf("\n\n================================================================================");
 }
 else if(choice==15)
 {printf("\nAlkali Metal is a reactive chemical species which readily lose their one valence electron to form ionic compounds with non-metals.");
  printf("\n\n================================================================================");
 }
 else if(choice==16)
 {printf("\nAlkaline Earth Metal is any of the divalent strongly basic metal of group III of the periodic table.");
  printf("\n\n================================================================================");
 }
 else if(choice==17)
 {printf("\nIsotope is a form of a chemical element whose atomic nucleus contains a specific number of neutron s, in addition to the number of proton s that uniquely defines the element.");
  printf("\n\n================================================================================");
 }
 else if(choice==18)
 {printf("\nHalf-Life is the time it takes for half of the substance to decay.");
  printf("\n\n================================================================================");
 }
 else if(choice==19)
 {printf("\nLanthanide is any of the series of elements with increasing atomic numbers that begins with lanthanum or cerium and ends with lutetium.");
  printf("\n\n================================================================================");
 }
 else if(choice==20)
 {printf("\nActinide is any of the series of elements with increasing atomic numbers that begins with actinium or thorium and ends with lawrencium.");
printf("\n\n================================================================================");
 }
 else if(choice==21)
 {
  printf("\n\n================================================================================");
 }
 else if(choice==22)
 {
  printf("\n\n================================================================================");
 }
 else if(choice==23)
 {
  printf("\n\n================================================================================");
 }
 else if(choice==24)
 {
 printf("\n\n================================================================================");
 }
 else if(choice==25)
 {
  printf("\n\n================================================================================");
 }
 else if(choice==26)
 {
 printf("\n\n================================================================================");
 }
 else if(choice==27)
 {
  printf("\n\n================================================================================");
 }
 else if(choice==28)
 {
  printf("\n\n================================================================================");
 }
 else if(choice==29)
 {
  printf("\n\n================================================================================");
 }
 else if(choice==30)
 {
  printf("\n\n================================================================================");
 }
 else if(choice==31)
{
exit(0);
printf("\n================================================================================");
}
else
{printf("\n invalid choice");
printf("\n Press 'O' or 'o' to continue... or any key to exit...");
scanf("%s",&b);
}
while(b=='o'||b=='O');

 getch();
}