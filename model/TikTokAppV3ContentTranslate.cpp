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



#include "TikTokAppV3ContentTranslate.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




TikTokAppV3ContentTranslate::TikTokAppV3ContentTranslate()
{
    m_Trg_lang = utility::conversions::to_string_t("");
    m_Trg_langIsSet = false;
    m_Src_content = utility::conversions::to_string_t("");
    m_Src_contentIsSet = false;
}

TikTokAppV3ContentTranslate::~TikTokAppV3ContentTranslate()
{
}

void TikTokAppV3ContentTranslate::validate()
{
    // TODO: implement validation
}

web::json::value TikTokAppV3ContentTranslate::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Trg_langIsSet)
    {
        val[utility::conversions::to_string_t("trg_lang")] = ModelBase::toJson(m_Trg_lang);
    }
    if(m_Src_contentIsSet)
    {
        val[utility::conversions::to_string_t("src_content")] = ModelBase::toJson(m_Src_content);
    }

    return val;
}

bool TikTokAppV3ContentTranslate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trg_lang")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trg_lang"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_trg_lang;
            ok &= ModelBase::fromJson(fieldValue, refVal_trg_lang);
            setTrgLang(refVal_trg_lang);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_content")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_content"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_src_content;
            ok &= ModelBase::fromJson(fieldValue, refVal_src_content);
            setSrcContent(refVal_src_content);
        }
    }
    return ok;
}

void TikTokAppV3ContentTranslate::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Trg_langIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trg_lang"), m_Trg_lang));
    }
    if(m_Src_contentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("src_content"), m_Src_content));
    }
}

bool TikTokAppV3ContentTranslate::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("trg_lang")))
    {
        utility::string_t refVal_trg_lang;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("trg_lang")), refVal_trg_lang );
        setTrgLang(refVal_trg_lang);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("src_content")))
    {
        utility::string_t refVal_src_content;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("src_content")), refVal_src_content );
        setSrcContent(refVal_src_content);
    }
    return ok;
}

utility::string_t TikTokAppV3ContentTranslate::getTrgLang() const
{
    return m_Trg_lang;
}

void TikTokAppV3ContentTranslate::setTrgLang(const utility::string_t& value)
{
    m_Trg_lang = value;
    m_Trg_langIsSet = true;
}

bool TikTokAppV3ContentTranslate::trgLangIsSet() const
{
    return m_Trg_langIsSet;
}

void TikTokAppV3ContentTranslate::unsetTrg_lang()
{
    m_Trg_langIsSet = false;
}
utility::string_t TikTokAppV3ContentTranslate::getSrcContent() const
{
    return m_Src_content;
}

void TikTokAppV3ContentTranslate::setSrcContent(const utility::string_t& value)
{
    m_Src_content = value;
    m_Src_contentIsSet = true;
}

bool TikTokAppV3ContentTranslate::srcContentIsSet() const
{
    return m_Src_contentIsSet;
}

void TikTokAppV3ContentTranslate::unsetSrc_content()
{
    m_Src_contentIsSet = false;
}
}
}
}
}


