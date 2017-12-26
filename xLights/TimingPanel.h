#ifndef TIMINGPANEL_H
#define TIMINGPANEL_H

#include "BulkEditControls.h"

//(*Headers(TimingPanel)
#include <wx/scrolwin.h>
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/bmpbuttn.h>
//*)

class Model;

class TimingPanel: public wxPanel
{
	public:

		TimingPanel(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~TimingPanel();

        wxString GetTimingString();
        void SetDefaultControls(const Model *model, bool optionbased = false);

		//(*Declarations(TimingPanel)
		wxStaticText* InAdjustmentText;
		wxNotebook* Notebook1;
		BulkEditCheckBox* CheckBox_In_Reverse;
		wxStaticText* StaticText2;
		BulkEditChoice* Choice_LayerMethod;
		wxPanel* Panel_Sizer;
		BulkEditTextCtrl* TextCtrl_EffectLayerMix;
		BulkEditChoice* Choice_Out_Transition_Type;
		BulkEditSlider* Slider_In_Adjust;
		BulkEditTextCtrl* TextCtrl_Fadeout;
		BulkEditSlider* Slider_EffectLayerMix;
		wxBitmapButton* BitmapButton_CheckBox_LayerMorph;
		wxCheckBox* CheckBox_LayerMorph;
		wxCheckBox* CheckBox_ResetTimingPanel;
		wxStaticText* OutAdjustmentText;
		wxBitmapButton* BitmapButton_EffectLayerMix;
		BulkEditCheckBox* CheckBox_Out_Reverse;
		wxScrolledWindow* ScrolledWindowTiming;
		BulkEditChoice* Choice_In_Transition_Type;
		BulkEditTextCtrl* TextCtrl_In_Adjust;
		BulkEditTextCtrl* TextCtrl_Out_Adjust;
		BulkEditSlider* Slider_Out_Adjust;
		wxStaticText* StaticText4;
		BulkEditTextCtrl* TextCtrl_Fadein;
		//*)
       
	protected:

		//(*Identifiers(TimingPanel)
		static const long ID_CHECKBOX_ResetTimingPanel;
		static const long ID_CHECKBOX_LayerMorph;
		static const long ID_BITMAPBUTTON_CHECKBOX_LayerMorph;
		static const long ID_CHOICE_LayerMethod;
		static const long ID_SLIDER_EffectLayerMix;
		static const long IDD_TEXTCTRL_EffectLayerMix;
		static const long ID_BITMAPBUTTON_SLIDER_EffectLayerMix;
		static const long ID_CHOICE_In_Transition_Type;
		static const long ID_STATICTEXT_Fadein;
		static const long ID_TEXTCTRL_Fadein;
		static const long ID_STATICTEXT_In_Transition_Adjust;
		static const long ID_SLIDER_In_Transition_Adjust;
		static const long IDD_TEXTCTRL_In_Transition_Adjust;
		static const long ID_CHECKBOX_In_Transition_Reverse;
		static const long ID_PANEL2;
		static const long ID_CHOICE_Out_Transition_Type;
		static const long ID_STATICTEXT_Fadeout;
		static const long ID_TEXTCTRL_Fadeout;
		static const long ID_STATICTEXT_Out_Transition_Adjust;
		static const long ID_SLIDER_Out_Transition_Adjust;
		static const long IDD_TEXTCTRL_Out_Transition_Adjust;
		static const long ID_CHECKBOX_Out_Transition_Reverse;
		static const long ID_PANEL3;
		static const long IDD_NOTEBOOK1;
		static const long ID_SCROLLEDWINDOW1;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(TimingPanel)
		void OnResize(wxSizeEvent& event);
		void OnLockButtonClick(wxCommandEvent& event);
		void OnTransitionTypeSelect(wxCommandEvent& event);
		void OnVCButtonClick(wxCommandEvent& event);
		void OnVCChanged(wxCommandEvent& event);
		void OnCheckBox_ResetTimingPanelClick(wxCommandEvent& event);
        //*)

		DECLARE_EVENT_TABLE()
};

#endif
