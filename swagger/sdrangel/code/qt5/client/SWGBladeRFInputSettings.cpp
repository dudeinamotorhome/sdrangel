/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGBladeRFInputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGBladeRFInputSettings::SWGBladeRFInputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGBladeRFInputSettings::SWGBladeRFInputSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    lna_gain = 0;
    m_lna_gain_isSet = false;
    vga1 = 0;
    m_vga1_isSet = false;
    vga2 = 0;
    m_vga2_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    xb200 = 0;
    m_xb200_isSet = false;
    xb200_path = 0;
    m_xb200_path_isSet = false;
    xb200_filter = 0;
    m_xb200_filter_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
}

SWGBladeRFInputSettings::~SWGBladeRFInputSettings() {
    this->cleanup();
}

void
SWGBladeRFInputSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    lna_gain = 0;
    m_lna_gain_isSet = false;
    vga1 = 0;
    m_vga1_isSet = false;
    vga2 = 0;
    m_vga2_isSet = false;
    bandwidth = 0;
    m_bandwidth_isSet = false;
    log2_decim = 0;
    m_log2_decim_isSet = false;
    fc_pos = 0;
    m_fc_pos_isSet = false;
    xb200 = 0;
    m_xb200_isSet = false;
    xb200_path = 0;
    m_xb200_path_isSet = false;
    xb200_filter = 0;
    m_xb200_filter_isSet = false;
    dc_block = 0;
    m_dc_block_isSet = false;
    iq_correction = 0;
    m_iq_correction_isSet = false;
}

void
SWGBladeRFInputSettings::cleanup() {













}

SWGBladeRFInputSettings*
SWGBladeRFInputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGBladeRFInputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate, pJson["devSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lna_gain, pJson["lnaGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&vga1, pJson["vga1"], "qint32", "");
    
    ::SWGSDRangel::setValue(&vga2, pJson["vga2"], "qint32", "");
    
    ::SWGSDRangel::setValue(&bandwidth, pJson["bandwidth"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_decim, pJson["log2Decim"], "qint32", "");
    
    ::SWGSDRangel::setValue(&fc_pos, pJson["fcPos"], "qint32", "");
    
    ::SWGSDRangel::setValue(&xb200, pJson["xb200"], "qint32", "");
    
    ::SWGSDRangel::setValue(&xb200_path, pJson["xb200Path"], "qint32", "");
    
    ::SWGSDRangel::setValue(&xb200_filter, pJson["xb200Filter"], "qint32", "");
    
    ::SWGSDRangel::setValue(&dc_block, pJson["dcBlock"], "qint32", "");
    
    ::SWGSDRangel::setValue(&iq_correction, pJson["iqCorrection"], "qint32", "");
    
}

QString
SWGBladeRFInputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGBladeRFInputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_dev_sample_rate_isSet){
        obj->insert("devSampleRate", QJsonValue(dev_sample_rate));
    }
    if(m_lna_gain_isSet){
        obj->insert("lnaGain", QJsonValue(lna_gain));
    }
    if(m_vga1_isSet){
        obj->insert("vga1", QJsonValue(vga1));
    }
    if(m_vga2_isSet){
        obj->insert("vga2", QJsonValue(vga2));
    }
    if(m_bandwidth_isSet){
        obj->insert("bandwidth", QJsonValue(bandwidth));
    }
    if(m_log2_decim_isSet){
        obj->insert("log2Decim", QJsonValue(log2_decim));
    }
    if(m_fc_pos_isSet){
        obj->insert("fcPos", QJsonValue(fc_pos));
    }
    if(m_xb200_isSet){
        obj->insert("xb200", QJsonValue(xb200));
    }
    if(m_xb200_path_isSet){
        obj->insert("xb200Path", QJsonValue(xb200_path));
    }
    if(m_xb200_filter_isSet){
        obj->insert("xb200Filter", QJsonValue(xb200_filter));
    }
    if(m_dc_block_isSet){
        obj->insert("dcBlock", QJsonValue(dc_block));
    }
    if(m_iq_correction_isSet){
        obj->insert("iqCorrection", QJsonValue(iq_correction));
    }

    return obj;
}

qint64
SWGBladeRFInputSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGBladeRFInputSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGBladeRFInputSettings::getDevSampleRate() {
    return dev_sample_rate;
}
void
SWGBladeRFInputSettings::setDevSampleRate(qint32 dev_sample_rate) {
    this->dev_sample_rate = dev_sample_rate;
    this->m_dev_sample_rate_isSet = true;
}

qint32
SWGBladeRFInputSettings::getLnaGain() {
    return lna_gain;
}
void
SWGBladeRFInputSettings::setLnaGain(qint32 lna_gain) {
    this->lna_gain = lna_gain;
    this->m_lna_gain_isSet = true;
}

qint32
SWGBladeRFInputSettings::getVga1() {
    return vga1;
}
void
SWGBladeRFInputSettings::setVga1(qint32 vga1) {
    this->vga1 = vga1;
    this->m_vga1_isSet = true;
}

qint32
SWGBladeRFInputSettings::getVga2() {
    return vga2;
}
void
SWGBladeRFInputSettings::setVga2(qint32 vga2) {
    this->vga2 = vga2;
    this->m_vga2_isSet = true;
}

qint32
SWGBladeRFInputSettings::getBandwidth() {
    return bandwidth;
}
void
SWGBladeRFInputSettings::setBandwidth(qint32 bandwidth) {
    this->bandwidth = bandwidth;
    this->m_bandwidth_isSet = true;
}

qint32
SWGBladeRFInputSettings::getLog2Decim() {
    return log2_decim;
}
void
SWGBladeRFInputSettings::setLog2Decim(qint32 log2_decim) {
    this->log2_decim = log2_decim;
    this->m_log2_decim_isSet = true;
}

qint32
SWGBladeRFInputSettings::getFcPos() {
    return fc_pos;
}
void
SWGBladeRFInputSettings::setFcPos(qint32 fc_pos) {
    this->fc_pos = fc_pos;
    this->m_fc_pos_isSet = true;
}

qint32
SWGBladeRFInputSettings::getXb200() {
    return xb200;
}
void
SWGBladeRFInputSettings::setXb200(qint32 xb200) {
    this->xb200 = xb200;
    this->m_xb200_isSet = true;
}

qint32
SWGBladeRFInputSettings::getXb200Path() {
    return xb200_path;
}
void
SWGBladeRFInputSettings::setXb200Path(qint32 xb200_path) {
    this->xb200_path = xb200_path;
    this->m_xb200_path_isSet = true;
}

qint32
SWGBladeRFInputSettings::getXb200Filter() {
    return xb200_filter;
}
void
SWGBladeRFInputSettings::setXb200Filter(qint32 xb200_filter) {
    this->xb200_filter = xb200_filter;
    this->m_xb200_filter_isSet = true;
}

qint32
SWGBladeRFInputSettings::getDcBlock() {
    return dc_block;
}
void
SWGBladeRFInputSettings::setDcBlock(qint32 dc_block) {
    this->dc_block = dc_block;
    this->m_dc_block_isSet = true;
}

qint32
SWGBladeRFInputSettings::getIqCorrection() {
    return iq_correction;
}
void
SWGBladeRFInputSettings::setIqCorrection(qint32 iq_correction) {
    this->iq_correction = iq_correction;
    this->m_iq_correction_isSet = true;
}


bool
SWGBladeRFInputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_dev_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_lna_gain_isSet){ isObjectUpdated = true; break;}
        if(m_vga1_isSet){ isObjectUpdated = true; break;}
        if(m_vga2_isSet){ isObjectUpdated = true; break;}
        if(m_bandwidth_isSet){ isObjectUpdated = true; break;}
        if(m_log2_decim_isSet){ isObjectUpdated = true; break;}
        if(m_fc_pos_isSet){ isObjectUpdated = true; break;}
        if(m_xb200_isSet){ isObjectUpdated = true; break;}
        if(m_xb200_path_isSet){ isObjectUpdated = true; break;}
        if(m_xb200_filter_isSet){ isObjectUpdated = true; break;}
        if(m_dc_block_isSet){ isObjectUpdated = true; break;}
        if(m_iq_correction_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

