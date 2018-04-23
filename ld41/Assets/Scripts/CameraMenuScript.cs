using UnityEngine;
using System.Collections;

public class CameraMenuScript : MonoBehaviour {

    public GUISkin GuiSkin;

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
        WerewolfMenu.GuiSkin = GuiSkin;
        WerewolfMenu.MenuTop = 50;
        WerewolfMenu.MenuLeftOffset = 200;
        WerewolfMenu2 = this.gameObject.AddComponent<Menu>();
        WerewolfMenu2.GuiSkin = GuiSkin;
        WerewolfMenu2.MenuTop = 50;
        WerewolfMenu2.MenuLeftOffset = 200;

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

        FizzBuzzEndMenu.GuiSkin = GuiSkin;
        FizzBuzzEndMenu.MenuTop = 50;
        FizzBuzzEndMenu.MenuLeftOffset = 200;

        FizzBuzzEndMenu.AddButtonItem("Nope, you lose, sorry!\nThe correct answer was " + correct + ".", delegate () { FizzBuzzEndMenu.Disable(); MainMenu2.Enable(); });

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
        FizzBuzzCurrent.GuiSkin = GuiSkin;
        FizzBuzzCurrent.MenuTop = 50;
        FizzBuzzCurrent.MenuLeftOffset = 200;

        bool fizz = (num % 3) == 0;
        bool buzz = (num % 5) == 0;

        FizzBuzzCurrent.AddButtonItem("" + num + "!",
            delegate () { if (!(fizz || buzz)) { PlayFizzBuzz(num + 1); } else { LoseFizzBuzz(num); }; });
        FizzBuzzCurrent.AddButtonItem("Fizz!",
            delegate () { if (fizz && !buzz) { PlayFizzBuzz(num + 1); } else { LoseFizzBuzz(num); }; });
        FizzBuzzCurrent.AddButtonItem("Buzz!",
            delegate () { if (buzz && !fizz) { PlayFizzBuzz(num + 1); } else { LoseFizzBuzz(num); }; });
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
		MainMenu2.AddButtonItem("Ooh, hang gliding!", delegate() { UnityEngine.SceneManagement.SceneManager.LoadScene("Hanggliding"); });

        MainMenu.GuiSkin = GuiSkin;
        MainMenu.MenuTop = 50;
        MainMenu.MenuLeftOffset = 200;

        MainMenu2.GuiSkin = GuiSkin;
        MainMenu2.MenuTop = 50;
        MainMenu2.MenuLeftOffset = 200;

        MainMenu.Enable();




	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
