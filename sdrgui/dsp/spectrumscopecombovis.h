#ifndef INCLUDE_SPECTRUMSCOPECOMBOVIS_H
#define INCLUDE_SPECTRUMSCOPECOMBOVIS_H

#include <dsp/basebandsamplesink.h>
#include "dsp/spectrumvis.h"
#include "dsp/scopevis.h"
#include "export.h"

class Message;

class SDRGUI_API SpectrumScopeComboVis : public BasebandSampleSink {
public:

	SpectrumScopeComboVis(SpectrumVis* spectrumVis, ScopeVis* scopeVis);
	virtual ~SpectrumScopeComboVis();

	virtual void feed(const SampleVector::const_iterator& begin, const SampleVector::const_iterator& end, bool positiveOnly);
	virtual void start();
	virtual void stop();
	virtual bool handleMessage(const Message& message);

private:
	SpectrumVis* m_spectrumVis;
	ScopeVis* m_scopeVis;
};

#endif // INCLUDE_SPECTRUMSCOPECOMBOVIS_H
