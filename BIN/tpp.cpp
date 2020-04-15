static void Main()
{
    next:
    Random question = new Random();
    int x = question.Next(5);
    string[] array = new string[5];
    array[0] = "-What is the capital of France";
    array[1] = "-What is the capital of Spain";
    array[2] = "-What is the captial of Russia";
    array[3] = "-What is the capital of Ukraine";
    array[4] = "-What is the capital of Egypt";

    Console.WriteLine(array[x]);

    string[] answer = new string[5];
    answer[0] = "Paris";
    answer[1] = "Madrid";
    answer[2] = "Moscow";
    answer[3] = "Kiev";
    answer[4] = "Cairo";

    string a = Console.ReadLine();

    if (a == answer[x])
    {
        Console.WriteLine("It's True \n*Next Question is:");
        goto next;
    }
    else
        Console.WriteLine("It's False \n*Please Try Again.");

    Console.ReadLine();
}