import java.math.BigInteger;
import java.io.*;
import java.util.Vector;

public class c2 {
	
	public static BigInteger sqrt(BigInteger n) {
  BigInteger a = BigInteger.ONE;
  BigInteger b = new BigInteger(n.shiftRight(5).add(new BigInteger("8")).toString());
  while(b.compareTo(a) >= 0) {
    BigInteger mid = new BigInteger(a.add(b).shiftRight(1).toString());
    if(mid.multiply(mid).compareTo(n) > 0) b = mid.subtract(BigInteger.ONE);
    else a = mid.add(BigInteger.ONE);
  }
  return a.subtract(BigInteger.ONE);
}
	
	public static boolean isPal (BigInteger a) {
		String s =a.toString();
		int i,j;
		i=0;j=s.length()-1;
		while (i<j) {
			if (s.charAt(i)!=s.charAt(j)) return false;
			i++;j--;
		}
		return true;
	}
	
	public static void main (String args[]) throws IOException{
	String[] tab = {"1","4","9","121","484","10201","12321","14641","40804","44944","1002001","1234321","4008004","100020001","102030201","104060401","121242121","123454321","125686521","400080004","404090404","10000200001","10221412201","12102420121","12345654321","40000800004","1000002000001","1002003002001","1004006004001","1020304030201","1022325232201","1024348434201","1210024200121","1212225222121","1214428244121","1232346432321","1234567654321","4000008000004","4004009004004","100000020000001","100220141022001","102012040210201","102234363432201","121000242000121","121242363242121","123212464212321","123456787654321","400000080000004","10000000200000001","10002000300020001","10004000600040001","10020210401202001","10022212521222001","10024214841242001","10201020402010201","10203040504030201","10205060806050201","10221432623412201","10223454745432201","12100002420000121","12102202520220121","12104402820440121","12122232623222121","12124434743442121","12321024642012321","12323244744232321","12343456865434321","12345678987654321","40000000800000004","40004000900040004","1000000002000000001","1000220014100220001","1002003004003002001","1002223236323222001","1020100204020010201","1020322416142230201","1022123226223212201","1022345658565432201","1210000024200000121","1210242036302420121","1212203226223022121","1212445458545442121","1232100246420012321","1232344458544432321","1234323468643234321","4000000008000000004","100000000020000000001","100002000030000200001","100004000060000400001","100020201040102020001","100022201252102220001","100024201484102420001","100200120040021002001","100202122050221202001","100204124080421402001","100220341262143022001","100222343474343222001","102010002040200010201","102012022050220210201","102014042080240410201","102030405060504030201","102032425272524230201","102212122262221212201","102214144272441412201","102232545484545232201","102234567696765432201","121000000242000000121","121002200252002200121","121004400282004400121","121022221262122220121","121024421474124420121","121220122262221022121","121222324272423222121","121242363484363242121","121244565696565442121","123210002464200012321","123212222474222212321","123232425484524232321","123234645696546432321","123432124686421234321","123434346696643434321","400000000080000000004","400004000090000400004","10000000000200000000001","10000220001410002200001","10002002100400120020001","10002222123632122220001","10020010200400201002001","10020230421612403202001","10022014302620341022001","10022234545854543222001","10201000020402000010201","10201222221612222210201","10203022140604122030201","10203244363836344230201","10221210222622201212201","10221432643834623412201","10223234344844343232201","12100000002420000000121","12100242003630024200121","12102202302620320220121","12102444325852344420121","12122010222622201022121","12122252443834425222121","12124214524842541242121","12321000024642000012321","12321244225852244212321","12323222344844322232321","12343210246864201234321","40000000000800000000004","1000000000002000000000001","1000002000003000002000001","1000004000006000004000001","1000020200104010020200001","1000022200125210022200001","1000024200148410024200001","1000200030004000300020001","1000202030205020302020001","1000204030408040304020001","1000220232126212320220001","1000222232347432322220001","1002001002004002001002001","1002003004005004003002001","1002005006008006005002001","1002021222306032221202001","1002023224327234223202001","1002201232026202321022001","1002203234227224323022001","1002221454348434541222001","1002223456569656543222001","1020100000204020000010201","1020102020205020202010201","1020104040208020404010201","1020120402306032040210201","1020122422327232242210201","1020302030406040302030201","1020304050607060504030201","1020322434528254342230201","1020324454749474544230201","1022121002226222001212201","1022123024227224203212201","1022141424528254241412201","1022143446549456443412201","1022323232448442323232201","1022325254649464525232201","1210000000024200000000121","1210002200025200022000121","1210004400028200044000121","1210022220126210222200121","1210024420147410244200121","1210220032026202300220121","1210222232227222322220121","1210242254148414522420121","1210244454369634544420121","1212201002226222001022121","1212203204227224023022121","1212223242528252423222121","1212225444549454445222121",
	"1212421234248424321242121","1212423436449446343242121","1232100000246420000012321",
	"1232102220247420222012321","1232122422348432242212321","1232124642369632464212321",
	"1232322032448442302232321","1232324252649462524232321","1234321002468642001234321",
	"1234323224469644223234321","4000000000008000000000004","4000004000009000004000004"};	
	int ti,i,j,k,w=0;
	BigInteger[] tab2=new BigInteger[tab.length];
	for (i=0;i<tab.length;i++) {
		tab2[i]=new BigInteger(tab[i]);
	}
		
		
 InputStreamReader inp = new InputStreamReader(System.in);
    BufferedReader br = new BufferedReader(inp);
  int t =  Integer.parseInt(br.readLine());
for(ti=0;ti<t;ti++) {
	w=0;
    //BigInteger w=new BigInteger ("0");
     String[] s1 = br.readLine().split(" ");
     BigInteger a= new BigInteger(s1[0]);
     BigInteger b = new BigInteger(s1[1]);
     i=0;
	while (tab2[i].compareTo(a)==-1) i++;
	//System.out.println("mam poczatek" + i+ " wartosc "+tab2[i]);
	while (tab2[i].compareTo(b)!=1) {i++;w++;}

/*	   
	   BigInteger x = new BigInteger("0");
        Vector<BigInteger> v1=new Vector<BigInteger>();	
        Vector<BigInteger> v2=new Vector<BigInteger>();	
        Vector<BigInteger> v3=new Vector<BigInteger>();
        
        ///create palindromes
     //   for (i=1;i<10;i++) v1.add(new BigInteger(Integer.toString(i)));
     v1.add(new BigInteger("1");
     v1.add(new BigInteger("4");
     v1.add(new BigInteger("9");
     
        for (i=0;i<6;i++) {
			for(j=(int)java.lang.Math.pow(10,i);j<(int)java.lang.Math.pow(10,i+1);j++) {
				String s=Integer.toString(j);
//				v1.add(new BigInteger(s+new StringBuffer(s).reverse().toString()));
				x=new BigInteger(s+new StringBuffer(s).reverse().toString());
				x=x.pow(2);
				if (isPal(x)) v1.add(x);
			    }
			for(j=(int)java.lang.Math.pow(10,i);j<(int)java.lang.Math.pow(10,i+1);j++) {
				String s=Integer.toString(j);
				for(k=0;k<10;k++) {
//					v1.add(new BigInteger(s+Integer.toString(k)+new StringBuffer(s).reverse().toString()));
					x=new BigInteger(s+Integer.toString(k)+new StringBuffer(s).reverse().toString());
					x=x.pow(2);
					if (isPal(x)) v1.add(x);

			     }
			}
		}
		System.out.println();
		for(k=0;k<v1.size();k++) System.out.print("\""+v1.get(k)+"\",");
		System.out.println();
       System.out.println("v1 size= "+v1.size()+ " v1.last = "+v1.get(v1.size()-1) ); 	
        ///end of create palindromes
        * 
        */	
        
     System.out.println("Case #"+(ti+1)+": "+w);	
      }
  }
}
