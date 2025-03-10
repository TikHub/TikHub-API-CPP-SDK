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

/*
 * TikTokAppV3ContentTranslate.h
 *
 * TikTok_APP_V3_Content_Translate
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_TikTokAppV3ContentTranslate_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_TikTokAppV3ContentTranslate_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// TikTok_APP_V3_Content_Translate
/// </summary>
class  TikTokAppV3ContentTranslate
    : public ModelBase
{
public:
    TikTokAppV3ContentTranslate();
    virtual ~TikTokAppV3ContentTranslate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// TikTokAppV3ContentTranslate members

    /// <summary>
    /// Trg Lang，目标语言ISO639-1代码，例如：zh-Hans/ Target language ISO639-1 code, e.g. zh-Hans
    /// </summary>
    utility::string_t getTrgLang() const;
    bool trgLangIsSet() const;
    void unsetTrg_lang();

    void setTrgLang(const utility::string_t& value);

    /// <summary>
    /// Src Content，源语言内容，也就是需要翻译的内容/ Source language content, i.e. the content to be translated
    /// </summary>
    utility::string_t getSrcContent() const;
    bool srcContentIsSet() const;
    void unsetSrc_content();

    void setSrcContent(const utility::string_t& value);


protected:
    utility::string_t m_Trg_lang;
    bool m_Trg_langIsSet;
    utility::string_t m_Src_content;
    bool m_Src_contentIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_TikTokAppV3ContentTranslate_H_ */
