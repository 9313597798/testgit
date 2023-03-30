//import java.util.HashMap;
import java.util.*;

import javax.sound.sampled.SourceDataLine;
public class HashMaping {
    public static void main(String[] args) {
         //country(key),population(value)
    HashMap<String,Integer> map=new HashMap<>();
     
    //insertion
    map.put("india",130);// here order is non sequence
    map.put("USA",30);
    map.put("Uk",23);
    System.out.println(map);

    map.put("india",110);
    System.out.println(map);
    }
}