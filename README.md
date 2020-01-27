# Bonnus SDK iOS V1.4.6

- Release 21 Jun 2019. v1.4.6
   
Configuration of the Bonnus SDK for iOS.


Pre requirements:

* Bonnus SDK needs to implement ObjectMapper, this can be installed through CocoaPods or manually submodulate it.


- Include the BonnusSDK.framework file to the project:

To add the SDK, we drag it to our project from the Xcode navigation area:

We ensure that it is added in the Embedded Binaries sub section, if not, we add it with the + button and delete any duplicates generated in the Linked Framewotks and Libraries section.

- We import the library in the AppDelegate of our application:
```
import BonnusSDK
```

- The Setup function is called in the AppDelegate, within the didFinishLaunchingWithOptions function
```
Bonnus.instance.setupBonnus(UIApplication: application)
```

- Credentials for login to the Bonus API:

To use the SDK, we have to instantiate it once, every time the application opens:
(userID is optional, but recommended)
```
      Bonnus.instance.initWithCredentials(partnerID: "PartnerID - asignado",
                                            token: "token asignado",
                                            sdkId: "sdkId asignado",
                                            userID: "Identificado de usuario unico")
```

- SDK configuration.
The configuration of the SDK lives within the Bonnus platform, activating the SDK will save the configuration data on the device. The SDK configuration can only be modified by Bonnus.


Abandonment Message (optional): Some Bonnus contain a link to external sites or apps, it is possible to send the user an abandonment message before leaving the Application.

Background Color: Sets the color to be used for the Bonnus background.
Notification Color: Sets the color of the in-App notification when the user has obtained a Bonnus.
Button Color: Sets the color of the buttons.
Text Color: Sets the color of the main texts (Titles)

Accept Message: Sets the text of the button to accept the Bonnus (Default: "Accept").
Close Message: Sets the text of the button to close the Bonnus Pop-up (Default: "Save").

Style: Stable template to use: Currently there are two different templates.
Support Message: It is possible to set a personalized message for Questions / Contact / Support.

Moments: To configure the moments the following information is necessary:
Trigger: Sets the text or texts to establish in the action: (eg "Moment1", "Mom1")
Activation Logic: Sets when a Bonnus is going to be given, and consists of two elements, Logic (Equal, Major or Minor), Number (1, 2, 100, 50.60).
Reusable: Sets whether the user can earn a Bonnus every time the condition is met or only once.
Notification: Sets whether the bonnus will display an in-App notification or directly a Pop-up.


- Optional SDK configuration.
The SDK allows optional configuration from the application and must be included before SDK activation

- Activate the SDK.
Bonnus functionality will be transparent until the SDK is activated, in this way the Application can decide when to initialize, for example if you want to activate the functionality only to new users then the SDK must be activated in the registry or in the process that was desired.



- Activity / Moment Record

To process an action:

```
    @IBAction func ClickButtonOne(_ sender: Any) {
        Bonnus.instance.tryToRedeemPrice(momento: "La accion")
    }
```

- List of Bonds obtained.

To show the list of Bonnus obtained it is necessary to call this function, in this way the application can include within its menu or with a special button.
```
        Bonnus.instance.showRewardsViewController(currentViewController: self)
```
Now the APP can check if the SDK is active.
 ```
 let result = UserSettings.isSDKStarted() 
 ``` 
 
Available in version 1.3 or higher: Segmentation values can be assigned
  of users:
  
 ```
   UserSettings.setBirthday(date: "26/01/1980") //Formato DD/MM/YYYY
   
   UserSettings.setGender(gender: "M")  // Una sola letra M o F
   
   UserSettings.setZipCode(zipcode: "01400")
   
   UserSettings.setGeo(latitude: "19.1234" , longitude: "-99.1234")


 ``` 
 
 Initialize the SDK again to send updates on user segmentation
 
 
  Available in version 1.4.1 or Superiror: Delegates can be implemented when redeeming a coupon:

assigning the controller that will be the delegate with the setCuponDelegate method and then implementing the delegates extension
 
 ```
  Bonnus.instance.setCuponDelegate(delegate: self)
 
 extension DemoViewController: cuponDelegate {
    func onRewardActionListener(rewardAction: Bool) {
        if rewardAction {
            print("User redeem cupon")
        } else {
            print("User declined ")
        }
    }
    
    func onEarnedBonnusListener(data: CallBackData) {
        print("Campaign ID")
        print(data.campaignId)
        print("codeBonnus")
        print(data.codeBonnus)
        
    }
 }

 
 ``` 
New delegate implemented for SDK configuration
 ```
   Bonnus.instance.setBonnusDelegate(delegate: self)

       func onSDKConfigRemoteListener(isActive: Bool) {
        if isActive {
            print("SDK set up was succesfull")
        } else {
             print("Somethong wrong happen SDK is not ready")
        }
    }

 ``` 

  To check the status of the SDK: 

 ```
   let status = Bonnus.instance.isSDKActivated()
   
 ``` 
 
  The following function can be used to force the update of the SDK:
 
 ```
 Bonnus.instance.readRemoteData()
 
 ``` 
 
  To reset the SDK you can use the following function:
 
 ```
 Bonnus.instance.resetSDK()
 
 ``` 

  Available in version 1.4.6 or Superiror: Bonnus coupons can be shown in view controllers presented in Modal form Add the following two lines of code on the Modal screen that the coupon will present before calling the ´Try to redeem´ :
 
 ```
  override func viewDidLoad() {
        super.viewDidLoad()
        Bonnus.instance.isModal = true
        Bonnus.instance.modalViewController = self

    }
 ``` 
 
* The framework was adapted to work optimally in simulator and single device, so you need to add a Run Script to be able to remove the architecture of the simulator and be able to send the application to the AppStore

Select the project, Choose the Target → Project Name → Select Build Phases → Click “+” → New Run Script Phase → Name the Script: “Remove Unused Architectures Script”. 

```
FRAMEWORK="BonnusSDK"
FRAMEWORK_EXECUTABLE_PATH="${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/$FRAMEWORK.framework/$FRAMEWORK"
EXTRACTED_ARCHS=()
for ARCH in $ARCHS
do
lipo -extract "$ARCH" "$FRAMEWORK_EXECUTABLE_PATH" -o "$FRAMEWORK_EXECUTABLE_PATH-$ARCH"
EXTRACTED_ARCHS+=("$FRAMEWORK_EXECUTABLE_PATH-$ARCH")
done
lipo -o "$FRAMEWORK_EXECUTABLE_PATH-merged" -create "${EXTRACTED_ARCHS[@]}"
rm "${EXTRACTED_ARCHS[@]}"
rm "$FRAMEWORK_EXECUTABLE_PATH"
mv "$FRAMEWORK_EXECUTABLE_PATH-merged" "$FRAMEWORK_EXECUTABLE_PATH"

```
This script should always appear under "Embed Frameworks."
 
 
* Version 1.1:

- When redeeming a coupon and if it is necessary to exit the application, the corresponding Bonnus window will close.
- Compatible with iOS 10
- Compatibility with Objective C

* Version 1.2:

- Date field is added to show coupon validity in the rewards list.
- Expired coupons are filtered so as not to be shown in the list
- Add button see more in rewards cells


* Version 1.3:

- Added functionality for user segmentation

* Version 1.4:

- Swift 5 and xCode 10.2.1 support is implemented
- The flag is enabled to show / hide notifications with API
- The flag is enabled to reuse moments
- Improvements in security and performance.
- Some error messages are hidden when Services are not responding.


* Version 1.4.2:

- Delegates are implemented to handle the flow in a more personalized way
- The flag is used to show / hide terms and conditions.

* Verse 1.4.5:
- Correction of minor bugs
- ObjectMapper is removed from Bundle
- Delegates name is updated to homologate version with Android
- New Callback for config SDK is added
- You can check the status of the SDK
- Colors are applied to backgrounds and texts
- Coupon codes are changed
- Force update of SDK implemented
- Get coupon values
- You get data from canonized coupons

* Verse 1.4.6:
- Modal navigation support implemented
- Homologation of callbacks with android
- The "Loader Success" is hidden when configuring the SDK



