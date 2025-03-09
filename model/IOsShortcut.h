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
 * IOsShortcut.h
 *
 * iOS_Shortcut
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_IOsShortcut_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_IOsShortcut_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// iOS_Shortcut
/// </summary>
class  IOsShortcut
    : public ModelBase
{
public:
    IOsShortcut();
    virtual ~IOsShortcut();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IOsShortcut members

    /// <summary>
    /// Version
    /// </summary>
    utility::string_t getVersion() const;
    bool versionIsSet() const;
    void unsetVersion();

    void setVersion(const utility::string_t& value);

    /// <summary>
    /// Update
    /// </summary>
    utility::string_t getUpdate() const;
    bool updateIsSet() const;
    void unsetUpdate();

    void setUpdate(const utility::string_t& value);

    /// <summary>
    /// Link
    /// </summary>
    utility::string_t getLink() const;
    bool linkIsSet() const;
    void unsetLink();

    void setLink(const utility::string_t& value);

    /// <summary>
    /// Link En
    /// </summary>
    utility::string_t getLinkEn() const;
    bool linkEnIsSet() const;
    void unsetLink_en();

    void setLinkEn(const utility::string_t& value);

    /// <summary>
    /// Note
    /// </summary>
    utility::string_t getNote() const;
    bool noteIsSet() const;
    void unsetNote();

    void setNote(const utility::string_t& value);

    /// <summary>
    /// Note En
    /// </summary>
    utility::string_t getNoteEn() const;
    bool noteEnIsSet() const;
    void unsetNote_en();

    void setNoteEn(const utility::string_t& value);


protected:
    utility::string_t m_Version;
    bool m_VersionIsSet;
    utility::string_t m_Update;
    bool m_UpdateIsSet;
    utility::string_t m_Link;
    bool m_LinkIsSet;
    utility::string_t m_Link_en;
    bool m_Link_enIsSet;
    utility::string_t m_Note;
    bool m_NoteIsSet;
    utility::string_t m_Note_en;
    bool m_Note_enIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_IOsShortcut_H_ */
