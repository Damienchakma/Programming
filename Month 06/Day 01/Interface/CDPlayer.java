package Interface;

public class CDPlayer implements Music{
    @Override
    public void start() {
        System.out.println("Music player starting");
    }

    @Override
    public void stop() {
        System.out.println("Music player stopping");
    }
}
