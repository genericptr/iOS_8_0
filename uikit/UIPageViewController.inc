{ Parsed from UIKit.framework (iPhoneOS8.2) UIPageViewController.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIPageViewControllerPtr = ^UIPageViewController;
  UIPageViewControllerDelegateProtocolPtr = ^UIPageViewControllerDelegateProtocol;
  UIPageViewControllerDataSourceProtocolPtr = ^UIPageViewControllerDataSourceProtocol;
{$endif}

{$ifdef TYPES}
type
  UIPageViewControllerNavigationOrientation = NSInteger;
  UIPageViewControllerNavigationOrientationPtr = ^UIPageViewControllerNavigationOrientation;

const
  UIPageViewControllerNavigationOrientationHorizontal = 0;
  UIPageViewControllerNavigationOrientationVertical = 1;

type
  UIPageViewControllerSpineLocation = NSInteger;
  UIPageViewControllerSpineLocationPtr = ^UIPageViewControllerSpineLocation;

const
  UIPageViewControllerSpineLocationNone = 0;
  UIPageViewControllerSpineLocationMin = 1;
  UIPageViewControllerSpineLocationMid = 2;
  UIPageViewControllerSpineLocationMax = 3;

type
  UIPageViewControllerNavigationDirection = NSInteger;
  UIPageViewControllerNavigationDirectionPtr = ^UIPageViewControllerNavigationDirection;

const
  UIPageViewControllerNavigationDirectionForward = 0;
  UIPageViewControllerNavigationDirectionReverse = 1;

type
  UIPageViewControllerTransitionStyle = NSInteger;
  UIPageViewControllerTransitionStylePtr = ^UIPageViewControllerTransitionStyle;

const
  UIPageViewControllerTransitionStylePageCurl = 0;
  UIPageViewControllerTransitionStyleScroll = 1;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UIPageViewControllerOptionSpineLocationKey: NSString; cvar; external;
  UIPageViewControllerOptionInterPageSpacingKey: NSString { available in 6_0 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UIPageViewController = objcclass external (UIViewController)
  private
  public
    function initWithTransitionStyle_navigationOrientation_options (style: UIPageViewControllerTransitionStyle; navigationOrientation: UIPageViewControllerNavigationOrientation; options: NSDictionary): instancetype; message 'initWithTransitionStyle:navigationOrientation:options:';
    procedure setDelegate(newValue: UIPageViewControllerDelegateProtocol); message 'setDelegate:';
    function delegate: UIPageViewControllerDelegateProtocol; message 'delegate';
    procedure setDataSource(newValue: UIPageViewControllerDataSourceProtocol); message 'setDataSource:';
    function dataSource: UIPageViewControllerDataSourceProtocol; message 'dataSource';
    function transitionStyle: UIPageViewControllerTransitionStyle; message 'transitionStyle';
    function navigationOrientation: UIPageViewControllerNavigationOrientation; message 'navigationOrientation';
    function spineLocation: UIPageViewControllerSpineLocation; message 'spineLocation';
    procedure setDoubleSided(newValue: boolean); message 'setDoubleSided:';
    function isDoubleSided: boolean; message 'isDoubleSided';
    function gestureRecognizers: NSArray; message 'gestureRecognizers';
    function viewControllers: NSArray; message 'viewControllers';
    procedure setViewControllers_direction_animated_completion (viewControllers_: NSArray; direction: UIPageViewControllerNavigationDirection; animated: boolean; completion: OpaqueCBlock); message 'setViewControllers:direction:animated:completion:';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UIPageViewControllerDelegateProtocol = objcprotocol external name 'UIPageViewControllerDelegate' (NSObjectProtocol)
  optional
    procedure pageViewController_willTransitionToViewControllers (pageViewController: UIPageViewController; pendingViewControllers: NSArray); message 'pageViewController:willTransitionToViewControllers:'; { available in 6_0 }
    procedure pageViewController_didFinishAnimating_previousViewControllers_transitionCompleted (pageViewController: UIPageViewController; finished: boolean; previousViewControllers: NSArray; completed: boolean); message 'pageViewController:didFinishAnimating:previousViewControllers:transitionCompleted:';
    function pageViewController_spineLocationForInterfaceOrientation (pageViewController: UIPageViewController; orientation: UIInterfaceOrientation): UIPageViewControllerSpineLocation; message 'pageViewController:spineLocationForInterfaceOrientation:';
    function pageViewControllerSupportedInterfaceOrientations (pageViewController: UIPageViewController): NSUInteger; message 'pageViewControllerSupportedInterfaceOrientations:'; { available in 7_0 }
    function pageViewControllerPreferredInterfaceOrientationForPresentation (pageViewController: UIPageViewController): UIInterfaceOrientation; message 'pageViewControllerPreferredInterfaceOrientationForPresentation:'; { available in 7_0 }
  end;

type
  UIPageViewControllerDataSourceProtocol = objcprotocol external name 'UIPageViewControllerDataSource' (NSObjectProtocol)
  required
    function pageViewController_viewControllerBeforeViewController (pageViewController: UIPageViewController; viewController: UIViewController): UIViewController; message 'pageViewController:viewControllerBeforeViewController:';
    function pageViewController_viewControllerAfterViewController (pageViewController: UIPageViewController; viewController: UIViewController): UIViewController; message 'pageViewController:viewControllerAfterViewController:';
  optional
    function presentationCountForPageViewController (pageViewController: UIPageViewController): NSInteger; message 'presentationCountForPageViewController:'; { available in 6_0 }
    function presentationIndexForPageViewController (pageViewController: UIPageViewController): NSInteger; message 'presentationIndexForPageViewController:'; { available in 6_0 }
  end;
{$endif}

