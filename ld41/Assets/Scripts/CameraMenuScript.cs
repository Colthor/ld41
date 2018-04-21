using UnityEngine;
using System.Collections;

public class CameraMenuScript : MonoBehaviour {

    public GUISkin GuiSkin;
    /*
	void woo()
	{
		Debug.Log("Woo!");
	}

	void hurrah(int x)
	{
		Debug.Log("Hurrah: " + x.ToString());
	}


	void goMenu2()
	{
		this.menu.Disable();
		menu2.Enable();
	}
	
	void goMenu1()
	{
		this.menu.Enable();
		menu2.Disable();
	}

	private Menu menu;
	private Menu menu2;

	// Use this for initialization
	void Start () {
		menu = this.gameObject.AddComponent<Menu>();
		menu.AddButtonItem("Button test one", woo);
		menu.AddButtonItem("Go to menu 2", goMenu2); 
		
		string[] items = {"0: Hello", "1: Goodbye", "2: Yellow", "3: And sigh"};
		menu.AddListItem("List test", items, 0, hurrah);

		menu.GuiSkin = GuiSkin;
		
		menu.Enable();

		menu2 = this.gameObject.AddComponent<Menu>();
		menu2.AddButtonItem("Button test two", woo);
		menu2.AddButtonItem("Go back to menu 1", goMenu1);
		
		menu2.GuiSkin = GuiSkin;
		menu2.MenuTop = 25;
		menu2.LineWidth = 100;


	}
	
	// Update is called once per frame
	void Update () {
	
		if(Input.GetKeyDown(KeyCode.Escape))
		{
			this.menu.Disable();
			menu2.Enable();
		}
	}
    */

    private Menu MainMenu;
    private Menu MainMenu2; //MainMenu with extra hang gliding
    private Menu WerewolfMenu = null;
    private Menu WerewolfMenu2 = null;

    void InitWerewolf()
    {
        string PlayerClass = "", Victor = "";
        if (WerewolfMenu != null) Destroy(WerewolfMenu);
        if (WerewolfMenu2 != null) Destroy(WerewolfMenu2);
        WerewolfMenu = this.gameObject.AddComponent<Menu>();
        WerewolfMenu2 = this.gameObject.AddComponent<Menu>();

        int i = Random.Range(0, 4);
        switch (i)
        {
            case 0:
                PlayerClass = "the werewolf";
                Victor = "werewolves";
                break;
            case 1:
                PlayerClass = "the seer";
                Victor = "villagers";
                break;
            default:
                PlayerClass = "a villager";
                Victor = "villagers";
                break;
        }

        WerewolfMenu.AddButtonItem("You are " + PlayerClass, delegate () { WerewolfMenu.Disable(); WerewolfMenu2.Enable(); });
        WerewolfMenu2.AddButtonItem("The " + Victor + " win!", delegate () { WerewolfMenu2.Disable(); MainMenu2.Enable(); });

    }

    void StartWerewolf()
    {
        InitWerewolf();
        WerewolfMenu.Enable();
        MainMenu.Disable();
        MainMenu2.Disable();
    }

    private Menu FizzBuzzEndMenu = null;
    private Menu FizzBuzzCurrent = null;

    void LoseFizzBuzz(int num)
    {
        if(FizzBuzzEndMenu != null)
        {
            FizzBuzzEndMenu.Disable();
            Destroy(FizzBuzzEndMenu);
        }

        bool fizz = (num % 3) == 0;
        bool buzz = (num % 5) == 0;
        string correct;
        if(fizz && buzz)
        {
            correct = "FizzBuzz";
        }
        else
        {
            correct = "" + num;
            if (fizz) correct = "Fizz";
            if (buzz) correct = "Buzz";
        }

        FizzBuzzCurrent.Disable();
        FizzBuzzEndMenu = this.gameObject.AddComponent<Menu>();
        FizzBuzzEndMenu.AddButtonItem("Nope, you lose, sorry! The correct answer was " + correct + ".", delegate () { FizzBuzzEndMenu.Disable(); MainMenu2.Enable(); });

        FizzBuzzEndMenu.Enable();
    }

    void PlayFizzBuzz(int num)
    {
        if(FizzBuzzCurrent != null)
        {
            FizzBuzzCurrent.Disable();
            Destroy(FizzBuzzCurrent);
        }
        FizzBuzzCurrent = this.gameObject.AddComponent<Menu>();

        bool fizz = (num % 3) == 0;
        bool buzz = (num % 5) == 0;

        FizzBuzzCurrent.AddButtonItem("" + num + "!",
            delegate () { if (!(fizz || buzz)) { PlayFizzBuzz(num + 1); } else { LoseFizzBuzz(num); }; });
        FizzBuzzCurrent.AddButtonItem("Fizz!",
            delegate () { if (fizz) { PlayFizzBuzz(num + 1); } else { LoseFizzBuzz(num); }; });
        FizzBuzzCurrent.AddButtonItem("Buzz!",
            delegate () { if (buzz) { PlayFizzBuzz(num + 1); } else { LoseFizzBuzz(num); }; });
        FizzBuzzCurrent.AddButtonItem("FizzBuzz!",
            delegate () { if (fizz && buzz) { PlayFizzBuzz(num + 1); } else { LoseFizzBuzz(num); }; });

        FizzBuzzCurrent.Enable();
    }

    void StartFizzBuzz()
    {

        MainMenu.Disable();
        MainMenu2.Disable();
        PlayFizzBuzz(1);
    }


    // Use this for initialization
    void Start () {
		MainMenu = this.gameObject.AddComponent<Menu>();
		MainMenu2 = this.gameObject.AddComponent<Menu>();
		MainMenu.AddButtonItem("Werewolf", StartWerewolf);
		MainMenu2.AddButtonItem("Werewolf", StartWerewolf);
		MainMenu.AddButtonItem("FizzBuzz", StartFizzBuzz);
		MainMenu2.AddButtonItem("FizzBuzz", StartFizzBuzz);

        MainMenu.GuiSkin = GuiSkin;
        MainMenu2.GuiSkin = GuiSkin;

        MainMenu.Enable();




	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
