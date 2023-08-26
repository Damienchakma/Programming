package Interface.nested;

public class B implements A.NestedInterface{
    @Override
    public void fun() {
        System.out.println("Hello");
    }
}
