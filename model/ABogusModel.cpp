/**
 * TikHub.io - Your Ultimate Social Media Data & API Marketplace
 * High-performance asynchronous Douyin(抖音) TikTok Xiaohongshu(小红书) Kuaishou(快手) Weibo(微博) Instagram YouTube(油管) Twitter(X) Captcha Solver(验证码解决器) Temp Mail(临时邮箱) API(接口).
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ABogusModel.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ABogusModel::ABogusModel()
{
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_Data = utility::conversions::to_string_t("");
    m_DataIsSet = false;
    m_User_agent = utility::conversions::to_string_t("");
    m_User_agentIsSet = false;
    m_Index_0 = 0;
    m_Index_0IsSet = false;
    m_Index_1 = 0;
    m_Index_1IsSet = false;
    m_Index_2 = 0;
    m_Index_2IsSet = false;
}

ABogusModel::~ABogusModel()
{
}

void ABogusModel::validate()
{
    // TODO: implement validation
}

web::json::value ABogusModel::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }
    if(m_User_agentIsSet)
    {
        val[utility::conversions::to_string_t("user_agent")] = ModelBase::toJson(m_User_agent);
    }
    if(m_Index_0IsSet)
    {
        val[utility::conversions::to_string_t("index_0")] = ModelBase::toJson(m_Index_0);
    }
    if(m_Index_1IsSet)
    {
        val[utility::conversions::to_string_t("index_1")] = ModelBase::toJson(m_Index_1);
    }
    if(m_Index_2IsSet)
    {
        val[utility::conversions::to_string_t("index_2")] = ModelBase::toJson(m_Index_2);
    }

    return val;
}

bool ABogusModel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_agent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_agent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_user_agent;
            ok &= ModelBase::fromJson(fieldValue, refVal_user_agent);
            setUserAgent(refVal_user_agent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index_0")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_0"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_index_0;
            ok &= ModelBase::fromJson(fieldValue, refVal_index_0);
            setIndex0(refVal_index_0);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index_1")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_1"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_index_1;
            ok &= ModelBase::fromJson(fieldValue, refVal_index_1);
            setIndex1(refVal_index_1);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index_2")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_2"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_index_2;
            ok &= ModelBase::fromJson(fieldValue, refVal_index_2);
            setIndex2(refVal_index_2);
        }
    }
    return ok;
}

void ABogusModel::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
    if(m_User_agentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("user_agent"), m_User_agent));
    }
    if(m_Index_0IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("index_0"), m_Index_0));
    }
    if(m_Index_1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("index_1"), m_Index_1));
    }
    if(m_Index_2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("index_2"), m_Index_2));
    }
}

bool ABogusModel::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        utility::string_t refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("user_agent")))
    {
        utility::string_t refVal_user_agent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("user_agent")), refVal_user_agent );
        setUserAgent(refVal_user_agent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("index_0")))
    {
        int32_t refVal_index_0;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("index_0")), refVal_index_0 );
        setIndex0(refVal_index_0);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("index_1")))
    {
        int32_t refVal_index_1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("index_1")), refVal_index_1 );
        setIndex1(refVal_index_1);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("index_2")))
    {
        int32_t refVal_index_2;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("index_2")), refVal_index_2 );
        setIndex2(refVal_index_2);
    }
    return ok;
}

utility::string_t ABogusModel::getUrl() const
{
    return m_Url;
}

void ABogusModel::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool ABogusModel::urlIsSet() const
{
    return m_UrlIsSet;
}

void ABogusModel::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t ABogusModel::getData() const
{
    return m_Data;
}

void ABogusModel::setData(const utility::string_t& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool ABogusModel::dataIsSet() const
{
    return m_DataIsSet;
}

void ABogusModel::unsetData()
{
    m_DataIsSet = false;
}
utility::string_t ABogusModel::getUserAgent() const
{
    return m_User_agent;
}

void ABogusModel::setUserAgent(const utility::string_t& value)
{
    m_User_agent = value;
    m_User_agentIsSet = true;
}

bool ABogusModel::userAgentIsSet() const
{
    return m_User_agentIsSet;
}

void ABogusModel::unsetUser_agent()
{
    m_User_agentIsSet = false;
}
int32_t ABogusModel::getIndex0() const
{
    return m_Index_0;
}

void ABogusModel::setIndex0(int32_t value)
{
    m_Index_0 = value;
    m_Index_0IsSet = true;
}

bool ABogusModel::index0IsSet() const
{
    return m_Index_0IsSet;
}

void ABogusModel::unsetIndex_0()
{
    m_Index_0IsSet = false;
}
int32_t ABogusModel::getIndex1() const
{
    return m_Index_1;
}

void ABogusModel::setIndex1(int32_t value)
{
    m_Index_1 = value;
    m_Index_1IsSet = true;
}

bool ABogusModel::index1IsSet() const
{
    return m_Index_1IsSet;
}

void ABogusModel::unsetIndex_1()
{
    m_Index_1IsSet = false;
}
int32_t ABogusModel::getIndex2() const
{
    return m_Index_2;
}

void ABogusModel::setIndex2(int32_t value)
{
    m_Index_2 = value;
    m_Index_2IsSet = true;
}

bool ABogusModel::index2IsSet() const
{
    return m_Index_2IsSet;
}

void ABogusModel::unsetIndex_2()
{
    m_Index_2IsSet = false;
}
}
}
}
}


