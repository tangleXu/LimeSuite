#ifndef __LMS7SuiteAppFrame__
#define __LMS7SuiteAppFrame__

/**
@file
Subclass of AppFrame_view, which is generated by wxFormBuilder.
*/

#include "lms7suiteApp_gui.h"
#include "lime/LimeSuite.h"
#include "Logger.h"

//// end generated include

class pnlMiniLog;
class fftviewer_frFFTviewer;
class ADF4002_wxgui;
class Si5351C_wxgui;
class LMS_Programing_wxgui;
class HPM7_wxgui;
class FPGAcontrols_wxgui;
class Myriad7_wxgui;
class dlgDeviceInfo;
class SPI_wxgui;
class pnlBoardControls;
class DPDTest;

/** Implementing AppFrame */
class LMS7SuiteAppFrame : public AppFrame_view
{
    protected:
        // Handlers for AppFrame events.
        void OnClose( wxCloseEvent& event );
        void OnQuit( wxCommandEvent& event );
        void OnShowConnectionSettings( wxCommandEvent& event );
        void OnAbout( wxCommandEvent& event );
        void OnControlBoardConnect(wxCommandEvent& event);
        void OnDataBoardConnect(wxCommandEvent& event);
        void HandleLMSevent(wxCommandEvent& event);
        void OnFFTviewerClose(wxCloseEvent& event);
        void OnShowFFTviewer(wxCommandEvent& event);
        void OnADF4002Close(wxCloseEvent& event);
        void OnShowADF4002(wxCommandEvent& event);
        void OnSi5351Close(wxCloseEvent& event);
        void OnShowSi5351C(wxCommandEvent& event);
        void OnProgramingClose(wxCloseEvent& event);
        void OnShowPrograming(wxCommandEvent& event);
        void OnHPM7Close(wxCloseEvent& event);
        void OnShowHPM7(wxCommandEvent& event);
        void OnFPGAcontrolsClose(wxCloseEvent& event);
        void OnShowFPGAcontrols(wxCommandEvent& event);
        void OnMyriad7Close(wxCloseEvent& event);
        void OnShowMyriad7(wxCommandEvent& event);
        void OnDeviceInfoClose(wxCloseEvent& event);
        void OnShowDeviceInfo(wxCommandEvent& event);
        void OnSPIClose(wxCloseEvent& event);
        void OnShowSPI(wxCommandEvent& event);
        void OnBoardControlsClose(wxCloseEvent& event);
        void OnShowBoardControls(wxCommandEvent& event);
        void OnChangeCacheSettings(wxCommandEvent& event);
        void OnLmsChanged(wxCommandEvent& event);
        void OnDPDTestClose(wxCloseEvent& event);
        void OnShowDPDTest(wxCommandEvent& event);
    public:
		/** Constructor */
        LMS7SuiteAppFrame( wxWindow* parent );
	//// end generated class members
        virtual ~LMS7SuiteAppFrame();
        static int m_lmsSelection;
protected:
        static void OnGlobalLogEvent(const lime::LogLevel level, const char *message);
        static void OnLogEvent(const char* text, unsigned int type);
        static void OnLogDataTransfer(bool Tx, const unsigned char* data, const unsigned int length);
        void OnLogMessage(wxCommandEvent &event);
        static const wxString cWindowTitle;
        static const int cDeviceInfoCollumn = 1;
        static const int cDeviceVerRevMaskCollumn = 2;
        void UpdateConnections(lms_device_t* port);

        lms_device_t* lmsControl;
        pnlMiniLog* mMiniLog;
        fftviewer_frFFTviewer* fftviewer;
        static LMS7SuiteAppFrame* obj_ptr;
        ADF4002_wxgui* adfGUI;

        Si5351C_wxgui* si5351gui;

        LMS_Programing_wxgui* programmer;
        HPM7_wxgui* hpm7;
        FPGAcontrols_wxgui* fpgaControls;
        Myriad7_wxgui* myriad7;
        dlgDeviceInfo* deviceInfo;
        SPI_wxgui* spi;
        pnlBoardControls* boardControlsGui;
        DPDTest* DPDTestGui;
};


#endif // __LMS7SuiteAppFrame__

