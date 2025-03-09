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



#include "BodyHcaptchaApiV1CaptchaHcaptchaPost.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BodyHcaptchaApiV1CaptchaHcaptchaPost::BodyHcaptchaApiV1CaptchaHcaptchaPost()
{
    m_Sitekey = utility::conversions::to_string_t("");
    m_SitekeyIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_ProxyIsSet = false;
}

BodyHcaptchaApiV1CaptchaHcaptchaPost::~BodyHcaptchaApiV1CaptchaHcaptchaPost()
{
}

void BodyHcaptchaApiV1CaptchaHcaptchaPost::validate()
{
    // TODO: implement validation
}

web::json::value BodyHcaptchaApiV1CaptchaHcaptchaPost::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SitekeyIsSet)
    {
        val[utility::conversions::to_string_t("sitekey")] = ModelBase::toJson(m_Sitekey);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_ProxyIsSet)
    {
        val[utility::conversions::to_string_t("proxy")] = ModelBase::toJson(m_Proxy);
    }

    return val;
}

bool BodyHcaptchaApiV1CaptchaHcaptchaPost::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sitekey")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sitekey"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_sitekey;
            ok &= ModelBase::fromJson(fieldValue, refVal_sitekey);
            setSitekey(refVal_sitekey);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("proxy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_proxy;
            ok &= ModelBase::fromJson(fieldValue, refVal_proxy);
            setProxy(refVal_proxy);
        }
    }
    return ok;
}

void BodyHcaptchaApiV1CaptchaHcaptchaPost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SitekeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sitekey"), m_Sitekey));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_ProxyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("proxy"), m_Proxy));
    }
}

bool BodyHcaptchaApiV1CaptchaHcaptchaPost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("sitekey")))
    {
        utility::string_t refVal_sitekey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sitekey")), refVal_sitekey );
        setSitekey(refVal_sitekey);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("proxy")))
    {
        std::shared_ptr<Object> refVal_proxy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("proxy")), refVal_proxy );
        setProxy(refVal_proxy);
    }
    return ok;
}

utility::string_t BodyHcaptchaApiV1CaptchaHcaptchaPost::getSitekey() const
{
    return m_Sitekey;
}

void BodyHcaptchaApiV1CaptchaHcaptchaPost::setSitekey(const utility::string_t& value)
{
    m_Sitekey = value;
    m_SitekeyIsSet = true;
}

bool BodyHcaptchaApiV1CaptchaHcaptchaPost::sitekeyIsSet() const
{
    return m_SitekeyIsSet;
}

void BodyHcaptchaApiV1CaptchaHcaptchaPost::unsetSitekey()
{
    m_SitekeyIsSet = false;
}
utility::string_t BodyHcaptchaApiV1CaptchaHcaptchaPost::getUrl() const
{
    return m_Url;
}

void BodyHcaptchaApiV1CaptchaHcaptchaPost::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool BodyHcaptchaApiV1CaptchaHcaptchaPost::urlIsSet() const
{
    return m_UrlIsSet;
}

void BodyHcaptchaApiV1CaptchaHcaptchaPost::unsetUrl()
{
    m_UrlIsSet = false;
}
std::shared_ptr<Object> BodyHcaptchaApiV1CaptchaHcaptchaPost::getProxy() const
{
    return m_Proxy;
}

void BodyHcaptchaApiV1CaptchaHcaptchaPost::setProxy(const std::shared_ptr<Object>& value)
{
    m_Proxy = value;
    m_ProxyIsSet = true;
}

bool BodyHcaptchaApiV1CaptchaHcaptchaPost::proxyIsSet() const
{
    return m_ProxyIsSet;
}

void BodyHcaptchaApiV1CaptchaHcaptchaPost::unsetProxy()
{
    m_ProxyIsSet = false;
}
}
}
}
}


