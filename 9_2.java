/**
Write a method to sort an array of strings so that all the anagrams are next to each other
**/

/**
The basi cidea is to implement a normal sorting algorithm where you override the compareTo method
to compare the "signature" of each string. In this case, the signature is the alphabetically sorted string.
**/
public class AnagramComparator implements Comparator<String> {
  public String sortChars(String s){
    char[] content = s.toCharArray();
    Arrays.sort(content);
    return new String(content);
  }
  
  public int compare(String s1, String s2){
    return sortChars(s1).compareTo(sortChars(s2));
  }
  
  /**
  Now just sort eh arrays, using this compareTo method instead
  of the usual one.
  **/
 Arrays.sort(array, new AnagramComparator());
