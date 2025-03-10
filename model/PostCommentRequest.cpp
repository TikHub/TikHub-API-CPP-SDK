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



#include "PostCommentRequest.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




PostCommentRequest::PostCommentRequest()
{
    m_Aweme_id = utility::conversions::to_string_t("");
    m_Aweme_idIsSet = false;
    m_Text = utility::conversions::to_string_t("");
    m_TextIsSet = false;
    m_Cookie = utility::conversions::to_string_t("");
    m_CookieIsSet = false;
    m_Device_id = utility::conversions::to_string_t("");
    m_Device_idIsSet = false;
    m_Iid = utility::conversions::to_string_t("");
    m_IidIsSet = false;
    m_Proxy = utility::conversions::to_string_t("");
    m_ProxyIsSet = false;
}

PostCommentRequest::~PostCommentRequest()
{
}

void PostCommentRequest::validate()
{
    // TODO: implement validation
}

web::json::value PostCommentRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Aweme_idIsSet)
    {
        val[utility::conversions::to_string_t("aweme_id")] = ModelBase::toJson(m_Aweme_id);
    }
    if(m_TextIsSet)
    {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(m_Text);
    }
    if(m_CookieIsSet)
    {
        val[utility::conversions::to_string_t("cookie")] = ModelBase::toJson(m_Cookie);
    }
    if(m_Device_idIsSet)
    {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(m_Device_id);
    }
    if(m_IidIsSet)
    {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(m_Iid);
    }
    if(m_ProxyIsSet)
    {
        val[utility::conversions::to_string_t("proxy")] = ModelBase::toJson(m_Proxy);
    }

    return val;
}

bool PostCommentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("aweme_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aweme_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_aweme_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_aweme_id);
            setAwemeId(refVal_aweme_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_text;
            ok &= ModelBase::fromJson(fieldValue, refVal_text);
            setText(refVal_text);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cookie")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cookie"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cookie;
            ok &= ModelBase::fromJson(fieldValue, refVal_cookie);
            setCookie(refVal_cookie);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_device_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_device_id);
            setDeviceId(refVal_device_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_iid;
            ok &= ModelBase::fromJson(fieldValue, refVal_iid);
            setIid(refVal_iid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_proxy;
            ok &= ModelBase::fromJson(fieldValue, refVal_proxy);
            setProxy(refVal_proxy);
        }
    }
    return ok;
}

void PostCommentRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Aweme_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("aweme_id"), m_Aweme_id));
    }
    if(m_TextIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("text"), m_Text));
    }
    if(m_CookieIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cookie"), m_Cookie));
    }
    if(m_Device_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("device_id"), m_Device_id));
    }
    if(m_IidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("iid"), m_Iid));
    }
    if(m_ProxyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("proxy"), m_Proxy));
    }
}

bool PostCommentRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("aweme_id")))
    {
        utility::string_t refVal_aweme_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("aweme_id")), refVal_aweme_id );
        setAwemeId(refVal_aweme_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("text")))
    {
        utility::string_t refVal_text;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("text")), refVal_text );
        setText(refVal_text);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cookie")))
    {
        utility::string_t refVal_cookie;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cookie")), refVal_cookie );
        setCookie(refVal_cookie);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("device_id")))
    {
        utility::string_t refVal_device_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("device_id")), refVal_device_id );
        setDeviceId(refVal_device_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("iid")))
    {
        utility::string_t refVal_iid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("iid")), refVal_iid );
        setIid(refVal_iid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("proxy")))
    {
        utility::string_t refVal_proxy;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("proxy")), refVal_proxy );
        setProxy(refVal_proxy);
    }
    return ok;
}

utility::string_t PostCommentRequest::getAwemeId() const
{
    return m_Aweme_id;
}

void PostCommentRequest::setAwemeId(const utility::string_t& value)
{
    m_Aweme_id = value;
    m_Aweme_idIsSet = true;
}

bool PostCommentRequest::awemeIdIsSet() const
{
    return m_Aweme_idIsSet;
}

void PostCommentRequest::unsetAweme_id()
{
    m_Aweme_idIsSet = false;
}
utility::string_t PostCommentRequest::getText() const
{
    return m_Text;
}

void PostCommentRequest::setText(const utility::string_t& value)
{
    m_Text = value;
    m_TextIsSet = true;
}

bool PostCommentRequest::textIsSet() const
{
    return m_TextIsSet;
}

void PostCommentRequest::unsetText()
{
    m_TextIsSet = false;
}
utility::string_t PostCommentRequest::getCookie() const
{
    return m_Cookie;
}

void PostCommentRequest::setCookie(const utility::string_t& value)
{
    m_Cookie = value;
    m_CookieIsSet = true;
}

bool PostCommentRequest::cookieIsSet() const
{
    return m_CookieIsSet;
}

void PostCommentRequest::unsetCookie()
{
    m_CookieIsSet = false;
}
utility::string_t PostCommentRequest::getDeviceId() const
{
    return m_Device_id;
}

void PostCommentRequest::setDeviceId(const utility::string_t& value)
{
    m_Device_id = value;
    m_Device_idIsSet = true;
}

bool PostCommentRequest::deviceIdIsSet() const
{
    return m_Device_idIsSet;
}

void PostCommentRequest::unsetDevice_id()
{
    m_Device_idIsSet = false;
}
utility::string_t PostCommentRequest::getIid() const
{
    return m_Iid;
}

void PostCommentRequest::setIid(const utility::string_t& value)
{
    m_Iid = value;
    m_IidIsSet = true;
}

bool PostCommentRequest::iidIsSet() const
{
    return m_IidIsSet;
}

void PostCommentRequest::unsetIid()
{
    m_IidIsSet = false;
}
utility::string_t PostCommentRequest::getProxy() const
{
    return m_Proxy;
}

void PostCommentRequest::setProxy(const utility::string_t& value)
{
    m_Proxy = value;
    m_ProxyIsSet = true;
}

bool PostCommentRequest::proxyIsSet() const
{
    return m_ProxyIsSet;
}

void PostCommentRequest::unsetProxy()
{
    m_ProxyIsSet = false;
}
}
}
}
}


